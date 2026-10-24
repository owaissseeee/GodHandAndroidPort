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

// Function: sceSnprintf
// Address: 0x3b1ee0 - 0x3b1f28
void sceSnprintf_0x3b1ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSnprintf_0x3b1ee0");
#endif

    switch (ctx->pc) {
        case 0x3b1f1cu: goto label_3b1f1c;
        default: break;
    }

    ctx->pc = 0x3b1ee0u;

    // 0x3b1ee0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3b1ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3b1ee4: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x3b1ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x3b1ee8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3b1ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3b1eec: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3b1eecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1ef0: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x3b1ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x3b1ef4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3b1ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1ef8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x3b1ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x3b1efc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b1efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b1f00: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x3b1f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x3b1f04: 0x24841de8  addiu       $a0, $a0, 0x1DE8
    ctx->pc = 0x3b1f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7656));
    // 0x3b1f08: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x3b1f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x3b1f0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b1f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1f10: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x3b1f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x3b1f14: 0xc0ec434  jal         func_3B10D0
    ctx->pc = 0x3B1F14u;
    SET_GPR_U32(ctx, 31, 0x3B1F1Cu);
    ctx->pc = 0x3B1F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F14u;
    // 0x3b1f18: 0x27a80068  addiu       $t0, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B10D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B10D0u, 0x3B1F14u, 0x3B1F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F1Cu;
label_3b1f1c:
    // 0x3b1f1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b1f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1f20: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F20u;
        // 0x3b1f24: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1F28u;
}
