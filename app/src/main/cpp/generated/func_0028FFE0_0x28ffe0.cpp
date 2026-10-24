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

// Function: func_0028FFE0
// Address: 0x28ffe0 - 0x290000
void func_0028FFE0_0x28ffe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028FFE0_0x28ffe0");
#endif

    switch (ctx->pc) {
        case 0x28fff4u: goto label_28fff4;
        default: break;
    }

    ctx->pc = 0x28ffe0u;

    // 0x28ffe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ffe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ffe4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ffe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ffec: 0xc0a3fe0  jal         func_28FF80
    ctx->pc = 0x28FFECu;
    SET_GPR_U32(ctx, 31, 0x28FFF4u);
    ctx->pc = 0x28FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FFECu;
    // 0x28fff0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF80u, 0x28FFECu, 0x28FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FFF4u;
label_28fff4:
    // 0x28fff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28fff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fff8: 0x3e00008  jr          $ra
    ctx->pc = 0x28FFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FFF8u;
        // 0x28fffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290000u;
}
