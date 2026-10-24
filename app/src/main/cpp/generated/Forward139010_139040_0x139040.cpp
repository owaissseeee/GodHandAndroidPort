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

// Function: Forward139010_139040
// Address: 0x139040 - 0x139060
void Forward139010_139040_0x139040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward139010_139040_0x139040");
#endif

    switch (ctx->pc) {
        case 0x139054u: goto label_139054;
        default: break;
    }

    ctx->pc = 0x139040u;

    // 0x139040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139044: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x139044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13904c: 0xc04e404  jal         func_139010
    ctx->pc = 0x13904Cu;
    SET_GPR_U32(ctx, 31, 0x139054u);
    ctx->pc = 0x139050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13904Cu;
    // 0x139050: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x139010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139010u, 0x13904Cu, 0x139054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139054u;
label_139054:
    // 0x139054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139058: 0x3e00008  jr          $ra
    ctx->pc = 0x139058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139058u;
        // 0x13905c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139060u;
}
