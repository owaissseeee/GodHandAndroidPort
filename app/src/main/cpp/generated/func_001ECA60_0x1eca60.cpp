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

// Function: func_001ECA60
// Address: 0x1eca60 - 0x1eca80
void func_001ECA60_0x1eca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ECA60_0x1eca60");
#endif

    switch (ctx->pc) {
        case 0x1eca74u: goto label_1eca74;
        default: break;
    }

    ctx->pc = 0x1eca60u;

    // 0x1eca60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eca64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eca64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eca68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eca6c: 0xc07b24a  jal         func_1EC928
    ctx->pc = 0x1ECA6Cu;
    SET_GPR_U32(ctx, 31, 0x1ECA74u);
    ctx->pc = 0x1ECA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECA6Cu;
    // 0x1eca70: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC928u, 0x1ECA6Cu, 0x1ECA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECA74u;
label_1eca74:
    // 0x1eca74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eca74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eca78: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA78u;
        // 0x1eca7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECA80u;
}
