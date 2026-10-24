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

// Function: cSceAtManager_AtDataReset_2C2838
// Address: 0x2c2838 - 0x2c2870
void cSceAtManager_AtDataReset_2C2838_0x2c2838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_AtDataReset_2C2838_0x2c2838");
#endif

    switch (ctx->pc) {
        case 0x2c2850u: goto label_2c2850;
        case 0x2c2860u: goto label_2c2860;
        default: break;
    }

    ctx->pc = 0x2c2838u;

    // 0x2c2838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c283c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2c283cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2c2840: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c2840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c2844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c2844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c2848: 0xc0b0c46  jal         func_2C3118
    ctx->pc = 0x2C2848u;
    SET_GPR_U32(ctx, 31, 0x2C2850u);
    ctx->pc = 0x2C284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2848u;
    // 0x2c284c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3118u, 0x2C2848u, 0x2C2850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2850u;
label_2c2850:
    // 0x2c2850: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2850u;
    {
        const bool branch_taken_0x2c2850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2850u;
        // 0x2c2854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2850) {
            ctx->pc = 0x2C2860u;
            goto label_2c2860;
        }
    }
    ctx->pc = 0x2C2858u;
    // 0x2c2858: 0xc0b0a02  jal         func_2C2808
    ctx->pc = 0x2C2858u;
    SET_GPR_U32(ctx, 31, 0x2C2860u);
    ctx->pc = 0x2C285Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2858u;
    // 0x2c285c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2808u, 0x2C2858u, 0x2C2860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2860u;
label_2c2860:
    // 0x2c2860: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c2860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2868: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2868u;
        // 0x2c286c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2870u;
}
