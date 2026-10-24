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

// Function: func_001F8A60
// Address: 0x1f8a60 - 0x1f8a88
void func_001F8A60_0x1f8a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F8A60_0x1f8a60");
#endif

    switch (ctx->pc) {
        case 0x1f8a78u: goto label_1f8a78;
        default: break;
    }

    ctx->pc = 0x1f8a60u;

    // 0x1f8a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f8a64: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1f8a64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1f8a68: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8A68u;
    {
        const bool branch_taken_0x1f8a68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A68u;
        // 0x1f8a6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a68) {
            ctx->pc = 0x1F8A78u;
            goto label_1f8a78;
        }
    }
    ctx->pc = 0x1F8A70u;
    // 0x1f8a70: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x1F8A70u;
    SET_GPR_U32(ctx, 31, 0x1F8A78u);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x1F8A70u, 0x1F8A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A78u;
label_1f8a78:
    // 0x1f8a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A7Cu;
        // 0x1f8a80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8A84u;
    // 0x1f8a84: 0x0  nop
    ctx->pc = 0x1f8a84u;
    // NOP
    ctx->pc = 0x1f8a88u;
}
