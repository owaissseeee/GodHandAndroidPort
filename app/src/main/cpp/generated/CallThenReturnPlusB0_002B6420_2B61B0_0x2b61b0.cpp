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

// Function: CallThenReturnPlusB0_002B6420_2B61B0
// Address: 0x2b61b0 - 0x2b61d8
void CallThenReturnPlusB0_002B6420_2B61B0_0x2b61b0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CallThenReturnPlusB0_002B6420_2B61B0_0x2b61b0");
#endif

    if (__builtin_expect(ctx->pc != 0x2b61b0u, 0)) {
        switch (ctx->pc) {
            case 0x2b61c4u: goto label_2b61c4;
            default: break;
        }
    }


    // 0x2b61b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b61b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b61b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b61b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b61b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b61bc: 0xc0ad908  jal         func_2B6420
    SET_GPR_U32(ctx, 31, 0x2B61C4u);
    ctx->pc = 0x2B61C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B61BCu;
    // 0x2b61c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002B6420_0x2b6420, 0x2b6420u, 0x2b61c4u)) {
        return;
    }
label_2b61c4:
    // 0x2b61c4: 0x260200b0  addiu       $v0, $s0, 0xB0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2b61c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b61c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b61cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b61ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b61d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B61D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61D0u;
        // 0x2b61d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B61D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B61D8u;
}