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

// Function: func_00346498
// Address: 0x346498 - 0x3464d8
void func_00346498_0x346498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346498_0x346498");
#endif

    switch (ctx->pc) {
        case 0x3464b4u: goto label_3464b4;
        case 0x3464c8u: goto label_3464c8;
        default: break;
    }

    ctx->pc = 0x346498u;

    // 0x346498: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x346498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34649c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34649cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3464a0: 0x8c43e084  lw          $v1, -0x1F7C($v0)
    ctx->pc = 0x3464a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EE084u));
    // 0x3464a4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3464A4u;
    {
        const bool branch_taken_0x3464a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3464A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3464A4u;
        // 0x3464a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3464a4) {
            ctx->pc = 0x3464C0u;
            goto label_3464c0;
        }
    }
    ctx->pc = 0x3464ACu;
    // 0x3464ac: 0xc0d1944  jal         func_346510
    ctx->pc = 0x3464ACu;
    SET_GPR_U32(ctx, 31, 0x3464B4u);
    ctx->pc = 0x346510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346510u, 0x3464ACu, 0x3464B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3464B4u;
label_3464b4:
    // 0x3464b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3464B4u;
    {
        const bool branch_taken_0x3464b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3464B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3464B4u;
        // 0x3464b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3464b4) {
            ctx->pc = 0x3464CCu;
            goto label_3464cc;
        }
    }
    ctx->pc = 0x3464BCu;
    // 0x3464bc: 0x0  nop
    ctx->pc = 0x3464bcu;
    // NOP
label_3464c0:
    // 0x3464c0: 0xc0d1936  jal         func_3464D8
    ctx->pc = 0x3464C0u;
    SET_GPR_U32(ctx, 31, 0x3464C8u);
    ctx->pc = 0x3464D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3464D8u, 0x3464C0u, 0x3464C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3464C8u;
label_3464c8:
    // 0x3464c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3464c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3464cc:
    // 0x3464cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3464CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3464D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3464CCu;
        // 0x3464d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3464CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3464D4u;
    // 0x3464d4: 0x0  nop
    ctx->pc = 0x3464d4u;
    // NOP
    ctx->pc = 0x3464d8u;
}
