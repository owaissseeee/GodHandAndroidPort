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

// Function: func_0034B270
// Address: 0x34b270 - 0x34b290
void func_0034B270_0x34b270(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034B270_0x34b270");
#endif

    if (__builtin_expect(ctx->pc != 0x34b270u, 0)) {
        switch (ctx->pc) {
            case 0x34b280u: goto label_34b280;
            default: break;
        }
    }


    // 0x34b270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34b274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34b278: 0xc0ca630  jal         func_3298C0
    ctx->pc = 0x34B278u;
    SET_GPR_U32(ctx, 31, 0x34B280u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_003298C0_0x3298c0, 0x3298c0u, 0x34b280u)) {
        return;
    }
label_34b280:
    // 0x34b280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34b280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b284: 0x102d  daddu       $v0, $zero, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b288: 0x3e00008  jr          $ra
    ctx->pc = 0x34B288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B288u;
        // 0x34b28c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B290u;
}