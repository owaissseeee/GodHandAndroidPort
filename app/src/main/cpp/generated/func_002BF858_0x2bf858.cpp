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

// Function: func_002BF858
// Address: 0x2bf858 - 0x2bf878
void func_002BF858_0x2bf858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BF858_0x2bf858");
#endif

    switch (ctx->pc) {
        case 0x2bf86cu: goto label_2bf86c;
        default: break;
    }

    ctx->pc = 0x2bf858u;

    // 0x2bf858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf85c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bf85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf864: 0xc0afe08  jal         func_2BF820
    ctx->pc = 0x2BF864u;
    SET_GPR_U32(ctx, 31, 0x2BF86Cu);
    ctx->pc = 0x2BF868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF864u;
    // 0x2bf868: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF820u, 0x2BF864u, 0x2BF86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF86Cu;
label_2bf86c:
    // 0x2bf86c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf870: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF870u;
        // 0x2bf874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF878u;
}
