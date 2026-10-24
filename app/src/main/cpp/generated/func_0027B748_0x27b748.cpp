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

// Function: func_0027B748
// Address: 0x27b748 - 0x27b768
void func_0027B748_0x27b748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027B748_0x27b748");
#endif

    switch (ctx->pc) {
        case 0x27b75cu: goto label_27b75c;
        default: break;
    }

    ctx->pc = 0x27b748u;

    // 0x27b748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27b748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27b74c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27b750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27b754: 0xc09ecba  jal         func_27B2E8
    ctx->pc = 0x27B754u;
    SET_GPR_U32(ctx, 31, 0x27B75Cu);
    ctx->pc = 0x27B758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B754u;
    // 0x27b758: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B2E8u, 0x27B754u, 0x27B75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B75Cu;
label_27b75c:
    // 0x27b75c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b760: 0x3e00008  jr          $ra
    ctx->pc = 0x27B760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B760u;
        // 0x27b764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B768u;
}
