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

// Function: func_0017EE78
// Address: 0x17ee78 - 0x17eea0
void func_0017EE78_0x17ee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017EE78_0x17ee78");
#endif

    switch (ctx->pc) {
        case 0x17ee94u: goto label_17ee94;
        default: break;
    }

    ctx->pc = 0x17ee78u;

    // 0x17ee78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17ee78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ee7c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17ee80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ee80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ee84: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x17ee84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee88: 0x24422308  addiu       $v0, $v0, 0x2308
    ctx->pc = 0x17ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8968));
    // 0x17ee8c: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x17EE8Cu;
    SET_GPR_U32(ctx, 31, 0x17EE94u);
    ctx->pc = 0x17EE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EE8Cu;
    // 0x17ee90: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x17EE8Cu, 0x17EE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EE94u;
label_17ee94:
    // 0x17ee94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ee94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ee98: 0x3e00008  jr          $ra
    ctx->pc = 0x17EE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE98u;
        // 0x17ee9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EEA0u;
}
