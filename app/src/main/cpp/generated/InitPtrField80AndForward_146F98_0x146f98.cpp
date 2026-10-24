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

// Function: InitPtrField80AndForward_146F98
// Address: 0x146f98 - 0x146fc8
void InitPtrField80AndForward_146F98_0x146f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPtrField80AndForward_146F98_0x146f98");
#endif

    switch (ctx->pc) {
        case 0x146fbcu: goto label_146fbc;
        default: break;
    }

    ctx->pc = 0x146f98u;

    // 0x146f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x146f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x146f9c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x146f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x146fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146fa4: 0x2442dcc8  addiu       $v0, $v0, -0x2338
    ctx->pc = 0x146fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958280));
    // 0x146fa8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x146fa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x146fac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x146FACu;
    {
        const bool branch_taken_0x146fac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x146FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146FACu;
        // 0x146fb0: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146fac) {
            ctx->pc = 0x146FBCu;
            goto label_146fbc;
        }
    }
    ctx->pc = 0x146FB4u;
    // 0x146fb4: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x146FB4u;
    SET_GPR_U32(ctx, 31, 0x146FBCu);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x146FB4u, 0x146FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FBCu;
label_146fbc:
    // 0x146fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x146FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146FC0u;
        // 0x146fc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146FC8u;
}
