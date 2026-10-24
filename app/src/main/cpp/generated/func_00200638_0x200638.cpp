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

// Function: func_00200638
// Address: 0x200638 - 0x200658
void func_00200638_0x200638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00200638_0x200638");
#endif

    switch (ctx->pc) {
        case 0x200648u: goto label_200648;
        default: break;
    }

    ctx->pc = 0x200638u;

    // 0x200638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20063c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200640: 0xc0c6be8  jal         func_31AFA0
    ctx->pc = 0x200640u;
    SET_GPR_U32(ctx, 31, 0x200648u);
    ctx->pc = 0x31AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AFA0u, 0x200640u, 0x200648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200648u;
label_200648:
    // 0x200648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20064c: 0x3e00008  jr          $ra
    ctx->pc = 0x20064Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20064Cu;
        // 0x200650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20064Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200654u;
    // 0x200654: 0x0  nop
    ctx->pc = 0x200654u;
    // NOP
    ctx->pc = 0x200658u;
}
