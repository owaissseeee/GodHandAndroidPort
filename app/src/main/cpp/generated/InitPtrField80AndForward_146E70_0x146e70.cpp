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

// Function: InitPtrField80AndForward_146E70
// Address: 0x146e70 - 0x146ea0
void InitPtrField80AndForward_146E70_0x146e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPtrField80AndForward_146E70_0x146e70");
#endif

    switch (ctx->pc) {
        case 0x146e94u: goto label_146e94;
        default: break;
    }

    ctx->pc = 0x146e70u;

    // 0x146e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x146e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x146e74: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x146e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x146e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146e7c: 0x2442dcc8  addiu       $v0, $v0, -0x2338
    ctx->pc = 0x146e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958280));
    // 0x146e80: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x146e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x146e84: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x146E84u;
    {
        const bool branch_taken_0x146e84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x146E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E84u;
        // 0x146e88: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e84) {
            ctx->pc = 0x146E94u;
            goto label_146e94;
        }
    }
    ctx->pc = 0x146E8Cu;
    // 0x146e8c: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x146E8Cu;
    SET_GPR_U32(ctx, 31, 0x146E94u);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x146E8Cu, 0x146E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E94u;
label_146e94:
    // 0x146e94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146e98: 0x3e00008  jr          $ra
    ctx->pc = 0x146E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E98u;
        // 0x146e9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146EA0u;
}
