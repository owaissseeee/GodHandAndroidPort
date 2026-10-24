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

// Function: EffEventDataRegist
// Address: 0x2fa0b0 - 0x2fa0e8
void EffEventDataRegist_0x2fa0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffEventDataRegist_0x2fa0b0");
#endif

    switch (ctx->pc) {
        case 0x2fa0d8u: goto label_2fa0d8;
        default: break;
    }

    ctx->pc = 0x2fa0b0u;

    // 0x2fa0b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fa0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fa0b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2fa0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa0b8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA0B8u;
    {
        const bool branch_taken_0x2fa0b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0B8u;
        // 0x2fa0bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa0b8) {
            ctx->pc = 0x2FA0D8u;
            goto label_2fa0d8;
        }
    }
    ctx->pc = 0x2FA0C0u;
    // 0x2fa0c0: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2fa0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2fa0c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa0c8: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x2fa0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    // 0x2fa0cc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2fa0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2fa0d0: 0xc0c15d6  jal         func_305758
    ctx->pc = 0x2FA0D0u;
    SET_GPR_U32(ctx, 31, 0x2FA0D8u);
    ctx->pc = 0x2FA0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA0D0u;
    // 0x2fa0d4: 0xa082041c  sb          $v0, 0x41C($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 1052), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305758u, 0x2FA0D0u, 0x2FA0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA0D8u;
label_2fa0d8:
    // 0x2fa0d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0DCu;
        // 0x2fa0e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA0E4u;
    // 0x2fa0e4: 0x0  nop
    ctx->pc = 0x2fa0e4u;
    // NOP
    ctx->pc = 0x2fa0e8u;
}
