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

// Function: func_001C8FC8
// Address: 0x1c8fc8 - 0x1c8ff0
void func_001C8FC8_0x1c8fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C8FC8_0x1c8fc8");
#endif

    switch (ctx->pc) {
        case 0x1c8fe4u: goto label_1c8fe4;
        default: break;
    }

    ctx->pc = 0x1c8fc8u;

    // 0x1c8fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8fcc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1c8fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8fd4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1c8fd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8fd8: 0x24429ec8  addiu       $v0, $v0, -0x6138
    ctx->pc = 0x1c8fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942408));
    // 0x1c8fdc: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1C8FDCu;
    SET_GPR_U32(ctx, 31, 0x1C8FE4u);
    ctx->pc = 0x1C8FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8FDCu;
    // 0x1c8fe0: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1C8FDCu, 0x1C8FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8FE4u;
label_1c8fe4:
    // 0x1c8fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8FE8u;
        // 0x1c8fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8FF0u;
}
