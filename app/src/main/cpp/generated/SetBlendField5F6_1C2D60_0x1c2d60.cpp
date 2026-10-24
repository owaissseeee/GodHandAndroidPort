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

// Function: SetBlendField5F6_1C2D60
// Address: 0x1c2d60 - 0x1c2da0
void SetBlendField5F6_1C2D60_0x1c2d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBlendField5F6_1C2D60_0x1c2d60");
#endif

    switch (ctx->pc) {
        case 0x1c2d94u: goto label_1c2d94;
        default: break;
    }

    ctx->pc = 0x1c2d60u;

    // 0x1c2d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2d64: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1c2d64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2d6c: 0x84e605f6  lh          $a2, 0x5F6($a3)
    ctx->pc = 0x1c2d6cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 1526)));
    // 0x1c2d70: 0x4c00008  bltz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2D70u;
    {
        const bool branch_taken_0x1c2d70 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x1C2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D70u;
        // 0x1c2d74: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d70) {
            ctx->pc = 0x1C2D94u;
            goto label_1c2d94;
        }
    }
    ctx->pc = 0x1C2D78u;
    // 0x1c2d78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c2d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2d7c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c2d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1c2d80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2d80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c2d84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d88: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c2d88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d8c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1C2D8Cu;
    SET_GPR_U32(ctx, 31, 0x1C2D94u);
    ctx->pc = 0x1C2D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D8Cu;
    // 0x1c2d90: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1C2D8Cu, 0x1C2D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D94u;
label_1c2d94:
    // 0x1c2d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2d98: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D98u;
        // 0x1c2d9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2DA0u;
}
