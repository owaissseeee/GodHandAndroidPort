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

// Function: func_003184C0
// Address: 0x3184c0 - 0x3184e0
void func_003184C0_0x3184c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003184C0_0x3184c0");
#endif

    switch (ctx->pc) {
        case 0x3184d4u: goto label_3184d4;
        default: break;
    }

    ctx->pc = 0x3184c0u;

    // 0x3184c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3184c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3184c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3184c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3184c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3184c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3184cc: 0xc0c60b6  jal         func_3182D8
    ctx->pc = 0x3184CCu;
    SET_GPR_U32(ctx, 31, 0x3184D4u);
    ctx->pc = 0x3184D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3184CCu;
    // 0x3184d0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3182D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3182D8u, 0x3184CCu, 0x3184D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3184D4u;
label_3184d4:
    // 0x3184d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3184d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3184d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3184D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3184DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3184D8u;
        // 0x3184dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3184D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3184E0u;
}
