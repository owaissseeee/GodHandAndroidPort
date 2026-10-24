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

// Function: func_001FF7E0
// Address: 0x1ff7e0 - 0x1ff800
void func_001FF7E0_0x1ff7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FF7E0_0x1ff7e0");
#endif

    switch (ctx->pc) {
        case 0x1ff7f4u: goto label_1ff7f4;
        default: break;
    }

    ctx->pc = 0x1ff7e0u;

    // 0x1ff7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ff7e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ff7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff7e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff7ec: 0xc07fde0  jal         func_1FF780
    ctx->pc = 0x1FF7ECu;
    SET_GPR_U32(ctx, 31, 0x1FF7F4u);
    ctx->pc = 0x1FF7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF7ECu;
    // 0x1ff7f0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF780u, 0x1FF7ECu, 0x1FF7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF7F4u;
label_1ff7f4:
    // 0x1ff7f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7F8u;
        // 0x1ff7fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF800u;
}
