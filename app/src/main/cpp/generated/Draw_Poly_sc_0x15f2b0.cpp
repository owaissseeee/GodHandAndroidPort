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

// Function: Draw_Poly_sc
// Address: 0x15f2b0 - 0x15f2e0
void Draw_Poly_sc_0x15f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw_Poly_sc_0x15f2b0");
#endif

    switch (ctx->pc) {
        case 0x15f2ccu: goto label_15f2cc;
        default: break;
    }

    ctx->pc = 0x15f2b0u;

    // 0x15f2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15f2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15f2b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15f2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f2b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15f2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15f2bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15f2bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f2c0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x15f2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15f2c4: 0xc056e20  jal         func_15B880
    ctx->pc = 0x15F2C4u;
    SET_GPR_U32(ctx, 31, 0x15F2CCu);
    ctx->pc = 0x15F2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F2C4u;
    // 0x15f2c8: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B880u, 0x15F2C4u, 0x15F2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F2CCu;
label_15f2cc:
    // 0x15f2cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x15F2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2D0u;
        // 0x15f2d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F2D8u;
    // 0x15f2d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15f2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f2dc: 0x0  nop
    ctx->pc = 0x15f2dcu;
    // NOP
    ctx->pc = 0x15f2e0u;
}
