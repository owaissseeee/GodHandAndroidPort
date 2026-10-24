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

// Function: func_001C6A60
// Address: 0x1c6a60 - 0x1c6a90
void func_001C6A60_0x1c6a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C6A60_0x1c6a60");
#endif

    switch (ctx->pc) {
        case 0x1c6a78u: goto label_1c6a78;
        default: break;
    }

    ctx->pc = 0x1c6a60u;

    // 0x1c6a60: 0x34e80002  ori         $t0, $a3, 0x2
    ctx->pc = 0x1c6a60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x1c6a64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6a68: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1c6a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6a70: 0xc071aa4  jal         func_1C6A90
    ctx->pc = 0x1C6A70u;
    SET_GPR_U32(ctx, 31, 0x1C6A78u);
    ctx->pc = 0x1C6A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A70u;
    // 0x1c6a74: 0x24860070  addiu       $a2, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6A90u, 0x1C6A70u, 0x1C6A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A78u;
label_1c6a78:
    // 0x1c6a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A7Cu;
        // 0x1c6a80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6A84u;
    // 0x1c6a84: 0x0  nop
    ctx->pc = 0x1c6a84u;
    // NOP
    // 0x1c6a88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c6a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c6a8c: 0x0  nop
    ctx->pc = 0x1c6a8cu;
    // NOP
    ctx->pc = 0x1c6a90u;
}
