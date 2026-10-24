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

// Function: cNowLoading_executeTask
// Address: 0x2b65b0 - 0x2b65f0
void cNowLoading_executeTask_0x2b65b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cNowLoading_executeTask_0x2b65b0");
#endif

    switch (ctx->pc) {
        case 0x2b65e4u: goto label_2b65e4;
        default: break;
    }

    ctx->pc = 0x2b65b0u;

    // 0x2b65b0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2b65b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2b65b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b65b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b65b8: 0x90622554  lbu         $v0, 0x2554($v1)
    ctx->pc = 0x2b65b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3C2554u));
    // 0x2b65bc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B65BCu;
    {
        const bool branch_taken_0x2b65bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65BCu;
        // 0x2b65c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b65bc) {
            ctx->pc = 0x2B65E4u;
            goto label_2b65e4;
        }
    }
    ctx->pc = 0x2B65C4u;
    // 0x2b65c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b65c8: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2b65c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x2b65cc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x2b65ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x2b65d0: 0xa0622554  sb          $v0, 0x2554($v1)
    ctx->pc = 0x2b65d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9556), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b65d4: 0x24842c00  addiu       $a0, $a0, 0x2C00
    ctx->pc = 0x2b65d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11264));
    // 0x2b65d8: 0x24a56600  addiu       $a1, $a1, 0x6600
    ctx->pc = 0x2b65d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26112));
    // 0x2b65dc: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x2B65DCu;
    SET_GPR_U32(ctx, 31, 0x2B65E4u);
    ctx->pc = 0x2B65E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B65DCu;
    // 0x2b65e0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5470u, 0x2B65DCu, 0x2B65E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B65E4u;
label_2b65e4:
    // 0x2b65e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b65e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b65e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B65E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B65ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65E8u;
        // 0x2b65ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B65E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B65F0u;
}
