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

// Function: func_00201AB0
// Address: 0x201ab0 - 0x201ad0
void func_00201AB0_0x201ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00201AB0_0x201ab0");
#endif

    switch (ctx->pc) {
        case 0x201ac4u: goto label_201ac4;
        default: break;
    }

    ctx->pc = 0x201ab0u;

    // 0x201ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201ab4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x201ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201abc: 0xc0806a0  jal         func_201A80
    ctx->pc = 0x201ABCu;
    SET_GPR_U32(ctx, 31, 0x201AC4u);
    ctx->pc = 0x201AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201ABCu;
    // 0x201ac0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x201A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201A80u, 0x201ABCu, 0x201AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201AC4u;
label_201ac4:
    // 0x201ac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x201AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AC8u;
        // 0x201acc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201AD0u;
}
