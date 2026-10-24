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

// Function: cActionButtonUnit_setExit
// Address: 0x1f6f10 - 0x1f6f58
void cActionButtonUnit_setExit_0x1f6f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cActionButtonUnit_setExit_0x1f6f10");
#endif

    switch (ctx->pc) {
        case 0x1f6f48u: goto label_1f6f48;
        default: break;
    }

    ctx->pc = 0x1f6f10u;

    // 0x1f6f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6f14: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f6f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6f18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f6f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6f20: 0x90c20035  lbu         $v0, 0x35($a2)
    ctx->pc = 0x1f6f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 53)));
    // 0x1f6f24: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6F24u;
    {
        const bool branch_taken_0x1f6f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F6F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F24u;
        // 0x1f6f28: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f24) {
            ctx->pc = 0x1F6F40u;
            goto label_1f6f40;
        }
    }
    ctx->pc = 0x1F6F2Cu;
    // 0x1f6f2c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1f6f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1f6f30: 0x8c64d6e8  lw          $a0, -0x2918($v1)
    ctx->pc = 0x1f6f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956776)));
    // 0x1f6f34: 0x8c820f30  lw          $v0, 0xF30($a0)
    ctx->pc = 0x1f6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3888)));
    // 0x1f6f38: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1f6f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1f6f3c: 0xac820f30  sw          $v0, 0xF30($a0)
    ctx->pc = 0x1f6f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3888), GPR_U32(ctx, 2));
label_1f6f40:
    // 0x1f6f40: 0xc07dc8a  jal         func_1F7228
    ctx->pc = 0x1F6F40u;
    SET_GPR_U32(ctx, 31, 0x1F6F48u);
    ctx->pc = 0x1F6F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6F40u;
    // 0x1f6f44: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7228u, 0x1F6F40u, 0x1F6F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6F48u;
label_1f6f48:
    // 0x1f6f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F4Cu;
        // 0x1f6f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6F54u;
    // 0x1f6f54: 0x0  nop
    ctx->pc = 0x1f6f54u;
    // NOP
    ctx->pc = 0x1f6f58u;
}
