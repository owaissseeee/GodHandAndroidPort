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

// Function: InitPtrField80AndForward_1474A0
// Address: 0x1474a0 - 0x1474d0
void InitPtrField80AndForward_1474A0_0x1474a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPtrField80AndForward_1474A0_0x1474a0");
#endif

    switch (ctx->pc) {
        case 0x1474c4u: goto label_1474c4;
        default: break;
    }

    ctx->pc = 0x1474a0u;

    // 0x1474a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1474a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1474a4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1474a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1474a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1474a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1474ac: 0x2442dcc8  addiu       $v0, $v0, -0x2338
    ctx->pc = 0x1474acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958280));
    // 0x1474b0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1474b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1474b4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1474B4u;
    {
        const bool branch_taken_0x1474b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1474B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1474B4u;
        // 0x1474b8: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1474b4) {
            ctx->pc = 0x1474C4u;
            goto label_1474c4;
        }
    }
    ctx->pc = 0x1474BCu;
    // 0x1474bc: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x1474BCu;
    SET_GPR_U32(ctx, 31, 0x1474C4u);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x1474BCu, 0x1474C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1474C4u;
label_1474c4:
    // 0x1474c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1474c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1474c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1474C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1474CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1474C8u;
        // 0x1474cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1474C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1474D0u;
}
