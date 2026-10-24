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

// Function: cCoreSave_clearBlock180
// Address: 0x1f9fc0 - 0x1f9ff0
void cCoreSave_clearBlock180_0x1f9fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_clearBlock180_0x1f9fc0");
#endif

    switch (ctx->pc) {
        case 0x1f9fe0u: goto label_1f9fe0;
        default: break;
    }

    ctx->pc = 0x1f9fc0u;

    // 0x1f9fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f9fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9fc8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1f9fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9fcc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9FCCu;
    {
        const bool branch_taken_0x1f9fcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FCCu;
        // 0x1f9fd0: 0x24840180  addiu       $a0, $a0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9fcc) {
            ctx->pc = 0x1F9FE0u;
            goto label_1f9fe0;
        }
    }
    ctx->pc = 0x1F9FD4u;
    // 0x1f9fd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f9fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9fd8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1F9FD8u;
    SET_GPR_U32(ctx, 31, 0x1F9FE0u);
    ctx->pc = 0x1F9FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9FD8u;
    // 0x1f9fdc: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1F9FD8u, 0x1F9FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9FE0u;
label_1f9fe0:
    // 0x1f9fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FE4u;
        // 0x1f9fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9FECu;
    // 0x1f9fec: 0x0  nop
    ctx->pc = 0x1f9fecu;
    // NOP
    ctx->pc = 0x1f9ff0u;
}
