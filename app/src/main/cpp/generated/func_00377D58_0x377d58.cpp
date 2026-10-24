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

// Function: func_00377D58
// Address: 0x377d58 - 0x377d80
void func_00377D58_0x377d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00377D58_0x377d58");
#endif

    switch (ctx->pc) {
        case 0x377d74u: goto label_377d74;
        default: break;
    }

    ctx->pc = 0x377d58u;

    // 0x377d58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x377d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x377d5c: 0x3c040077  lui         $a0, 0x77
    ctx->pc = 0x377d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
    // 0x377d60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377d64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377d68: 0x2484df10  addiu       $a0, $a0, -0x20F0
    ctx->pc = 0x377d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958864));
    // 0x377d6c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x377D6Cu;
    SET_GPR_U32(ctx, 31, 0x377D74u);
    ctx->pc = 0x377D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D6Cu;
    // 0x377d70: 0x24060600  addiu       $a2, $zero, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x377D6Cu, 0x377D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377D74u;
label_377d74:
    // 0x377d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377d78: 0x3e00008  jr          $ra
    ctx->pc = 0x377D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377D78u;
        // 0x377d7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377D80u;
}
