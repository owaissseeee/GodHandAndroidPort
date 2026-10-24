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

// Function: SJRMT_Init
// Address: 0x33afc0 - 0x33b010
void SJRMT_Init_0x33afc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SJRMT_Init_0x33afc0");
#endif

    switch (ctx->pc) {
        case 0x33aff4u: goto label_33aff4;
        default: break;
    }

    ctx->pc = 0x33afc0u;

    // 0x33afc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33afc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33afc4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x33afc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33afc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33afcc: 0x24508dcc  addiu       $s0, $v0, -0x7234
    ctx->pc = 0x33afccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938060));
    // 0x33afd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33afd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33afd4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x33afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x33afd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x33afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3E8DCCu));
    // 0x33afdc: 0x24638dc8  addiu       $v1, $v1, -0x7238
    ctx->pc = 0x33afdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938056));
    // 0x33afe0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E8DC8u));
    // 0x33afe4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33AFE4u;
    {
        const bool branch_taken_0x33afe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AFE4u;
        // 0x33afe8: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33afe4) {
            ctx->pc = 0x33AFFCu;
            goto label_33affc;
        }
    }
    ctx->pc = 0x33AFECu;
    // 0x33afec: 0xc0cc942  jal         func_332508
    ctx->pc = 0x33AFECu;
    SET_GPR_U32(ctx, 31, 0x33AFF4u);
    ctx->pc = 0x332508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332508u, 0x33AFECu, 0x33AFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AFF4u;
label_33aff4:
    // 0x33aff4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x33aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33aff8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x33aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_33affc:
    // 0x33affc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33affcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33b000: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33b000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x33b004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33b004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b008: 0x3e00008  jr          $ra
    ctx->pc = 0x33B008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B008u;
        // 0x33b00c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B010u;
}
