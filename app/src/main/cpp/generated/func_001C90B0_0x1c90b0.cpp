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

// Function: func_001C90B0
// Address: 0x1c90b0 - 0x1c90e8
void func_001C90B0_0x1c90b0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C90B0_0x1c90b0");
#endif

    if (__builtin_expect(ctx->pc != 0x1c90b0u, 0)) {
        switch (ctx->pc) {
            case 0x1c90c4u: goto label_1c90c4;
            case 0x1c90d4u: goto label_1c90d4;
            default: break;
        }
    }


    // 0x1c90b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c90b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c90b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c90b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c90b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c90bc: 0xc06ddac  jal         func_1B76B0
    SET_GPR_U32(ctx, 31, 0x1C90C4u);
    ctx->pc = 0x1C90C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C90BCu;
    // 0x1c90c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &ClearField5B4IfFlagUnset_1B76B0_0x1b76b0, 0x1b76b0u, 0x1c90c4u)) {
        return;
    }
label_1c90c4:
    // 0x1c90c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C90C4u;
    {
        const bool branch_taken_0x1c90c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c90c4) {
            ctx->pc = 0x1C90C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C90C4u;
            // 0x1c90c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C90D8u;
            goto label_1c90d8;
        }
    }
    // 0x1c90cc: 0xc06ddb6  jal         func_1B76D8
    SET_GPR_U32(ctx, 31, 0x1C90D4u);
    ctx->pc = 0x1C90D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C90CCu;
    // 0x1c90d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001B76D8_0x1b76d8, 0x1b76d8u, 0x1c90d4u)) {
        return;
    }
label_1c90d4:
    // 0x1c90d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c90d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c90d8:
    // 0x1c90d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c90d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c90dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C90DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90DCu;
        // 0x1c90e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C90DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1c90e4: 0x0  nop
    // NOP
    ctx->pc = 0x1c90e8u;
}