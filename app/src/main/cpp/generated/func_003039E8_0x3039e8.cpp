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

// Function: func_003039E8
// Address: 0x3039e8 - 0x303a20
void func_003039E8_0x3039e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003039E8_0x3039e8");
#endif

    switch (ctx->pc) {
        case 0x303a10u: goto label_303a10;
        default: break;
    }

    ctx->pc = 0x3039e8u;

    // 0x3039e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3039e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3039ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3039ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3039f0: 0x8c82010c  lw          $v0, 0x10C($a0)
    ctx->pc = 0x3039f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x3039f4: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3039F4u;
    {
        const bool branch_taken_0x3039f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x3039F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039F4u;
        // 0x3039f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3039f4) {
            ctx->pc = 0x303A14u;
            goto label_303a14;
        }
    }
    ctx->pc = 0x3039FCu;
    // 0x3039fc: 0x8c820110  lw          $v0, 0x110($a0)
    ctx->pc = 0x3039fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x303a00: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x303A00u;
    {
        const bool branch_taken_0x303a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x303a00) {
            ctx->pc = 0x303A14u;
            goto label_303a14;
        }
    }
    ctx->pc = 0x303A08u;
    // 0x303a08: 0xc0c0a46  jal         func_302918
    ctx->pc = 0x303A08u;
    SET_GPR_U32(ctx, 31, 0x303A10u);
    ctx->pc = 0x302918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302918u, 0x303A08u, 0x303A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303A10u;
label_303a10:
    // 0x303a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x303a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_303a14:
    // 0x303a14: 0x3e00008  jr          $ra
    ctx->pc = 0x303A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A14u;
        // 0x303a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303A1Cu;
    // 0x303a1c: 0x0  nop
    ctx->pc = 0x303a1cu;
    // NOP
    ctx->pc = 0x303a20u;
}
