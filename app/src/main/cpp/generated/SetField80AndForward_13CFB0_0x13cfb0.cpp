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

// Function: SetField80AndForward_13CFB0
// Address: 0x13cfb0 - 0x13cfe0
void SetField80AndForward_13CFB0_0x13cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField80AndForward_13CFB0_0x13cfb0");
#endif

    switch (ctx->pc) {
        case 0x13cfd4u: goto label_13cfd4;
        default: break;
    }

    ctx->pc = 0x13cfb0u;

    // 0x13cfb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13cfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13cfb4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x13cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x13cfb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13cfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13cfbc: 0x2442dcc8  addiu       $v0, $v0, -0x2338
    ctx->pc = 0x13cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958280));
    // 0x13cfc0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x13cfc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x13cfc4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CFC4u;
    {
        const bool branch_taken_0x13cfc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFC4u;
        // 0x13cfc8: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cfc4) {
            ctx->pc = 0x13CFD4u;
            goto label_13cfd4;
        }
    }
    ctx->pc = 0x13CFCCu;
    // 0x13cfcc: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x13CFCCu;
    SET_GPR_U32(ctx, 31, 0x13CFD4u);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x13CFCCu, 0x13CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFD4u;
label_13cfd4:
    // 0x13cfd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13cfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x13CFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFD8u;
        // 0x13cfdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CFE0u;
}
