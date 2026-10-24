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

// Function: func_0033C2C0
// Address: 0x33c2c0 - 0x33c2f0
void func_0033C2C0_0x33c2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033C2C0_0x33c2c0");
#endif

    switch (ctx->pc) {
        case 0x33c2c0u: goto label_33c2c0;
        case 0x33c2c4u: goto label_33c2c4;
        case 0x33c2c8u: goto label_33c2c8;
        case 0x33c2ccu: goto label_33c2cc;
        case 0x33c2d0u: goto label_33c2d0;
        case 0x33c2d4u: goto label_33c2d4;
        case 0x33c2d8u: goto label_33c2d8;
        case 0x33c2dcu: goto label_33c2dc;
        case 0x33c2e0u: goto label_33c2e0;
        case 0x33c2e4u: goto label_33c2e4;
        case 0x33c2e8u: goto label_33c2e8;
        case 0x33c2ecu: goto label_33c2ec;
        default: break;
    }

    ctx->pc = 0x33c2c0u;

label_33c2c0:
    // 0x33c2c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33c2c4:
    // 0x33c2c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33c2c8:
    // 0x33c2c8: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x33c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_33c2cc:
    // 0x33c2cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_33c2d0:
    if (ctx->pc == 0x33C2D0u) {
        ctx->pc = 0x33C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2CCu;
        // 0x33c2d0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C2D4u;
        goto label_33c2d4;
    }
    ctx->pc = 0x33C2CCu;
    {
        const bool branch_taken_0x33c2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2CCu;
        // 0x33c2d0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c2cc) {
            ctx->pc = 0x33C2E0u;
            goto label_33c2e0;
        }
    }
    ctx->pc = 0x33C2D4u;
label_33c2d4:
    // 0x33c2d4: 0x8c439d20  lw          $v1, -0x62E0($v0)
    ctx->pc = 0x33c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941984)));
label_33c2d8:
    // 0x33c2d8: 0x60f809  jalr        $v1
label_33c2dc:
    if (ctx->pc == 0x33C2DCu) {
        ctx->pc = 0x33C2E0u;
        goto label_33c2e0;
    }
    ctx->pc = 0x33C2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33C2E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C2D8u, 0x33C2E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C2E0u;
label_33c2e0:
    // 0x33c2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c2e4:
    // 0x33c2e4: 0x3e00008  jr          $ra
label_33c2e8:
    if (ctx->pc == 0x33C2E8u) {
        ctx->pc = 0x33C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2E4u;
        // 0x33c2e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C2ECu;
        goto label_33c2ec;
    }
    ctx->pc = 0x33C2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2E4u;
        // 0x33c2e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C2ECu;
label_33c2ec:
    // 0x33c2ec: 0x0  nop
    ctx->pc = 0x33c2ecu;
    // NOP
    ctx->pc = 0x33c2f0u;
}
