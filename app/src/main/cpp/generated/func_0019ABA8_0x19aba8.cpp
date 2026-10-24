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

// Function: func_0019ABA8
// Address: 0x19aba8 - 0x19abc8
void func_0019ABA8_0x19aba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019ABA8_0x19aba8");
#endif

    switch (ctx->pc) {
        case 0x19abb8u: goto label_19abb8;
        default: break;
    }

    ctx->pc = 0x19aba8u;

    // 0x19aba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19aba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19abac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19abacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19abb0: 0xc070a74  jal         func_1C29D0
    ctx->pc = 0x19ABB0u;
    SET_GPR_U32(ctx, 31, 0x19ABB8u);
    ctx->pc = 0x1C29D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C29D0u, 0x19ABB0u, 0x19ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ABB8u;
label_19abb8:
    // 0x19abb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19abb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19abbc: 0x3e00008  jr          $ra
    ctx->pc = 0x19ABBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABBCu;
        // 0x19abc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ABBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19ABC4u;
    // 0x19abc4: 0x0  nop
    ctx->pc = 0x19abc4u;
    // NOP
    ctx->pc = 0x19abc8u;
}
