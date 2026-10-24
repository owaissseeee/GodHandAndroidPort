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

// Function: func_001E1CD0
// Address: 0x1e1cd0 - 0x1e1d10
void func_001E1CD0_0x1e1cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E1CD0_0x1e1cd0");
#endif

    switch (ctx->pc) {
        case 0x1e1cd0u: goto label_1e1cd0;
        case 0x1e1cd4u: goto label_1e1cd4;
        case 0x1e1cd8u: goto label_1e1cd8;
        case 0x1e1cdcu: goto label_1e1cdc;
        case 0x1e1ce0u: goto label_1e1ce0;
        case 0x1e1ce4u: goto label_1e1ce4;
        case 0x1e1ce8u: goto label_1e1ce8;
        case 0x1e1cecu: goto label_1e1cec;
        case 0x1e1cf0u: goto label_1e1cf0;
        case 0x1e1cf4u: goto label_1e1cf4;
        case 0x1e1cf8u: goto label_1e1cf8;
        case 0x1e1cfcu: goto label_1e1cfc;
        case 0x1e1d00u: goto label_1e1d00;
        case 0x1e1d04u: goto label_1e1d04;
        case 0x1e1d08u: goto label_1e1d08;
        case 0x1e1d0cu: goto label_1e1d0c;
        default: break;
    }

    ctx->pc = 0x1e1cd0u;

label_1e1cd0:
    // 0x1e1cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e1cd4:
    // 0x1e1cd4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1e1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_1e1cd8:
    // 0x1e1cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e1cdc:
    // 0x1e1cdc: 0x2463e0d8  addiu       $v1, $v1, -0x1F28
    ctx->pc = 0x1e1cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959320));
label_1e1ce0:
    // 0x1e1ce0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e1ce4:
    // 0x1e1ce4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e1ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1e1ce8:
    // 0x1e1ce8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1e1ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e1cec:
    // 0x1e1cec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e1cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e1cf0:
    // 0x1e1cf0: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x1e1cf0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1e1cf4:
    // 0x1e1cf4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e1cf8:
    // 0x1e1cf8: 0x40f809  jalr        $v0
label_1e1cfc:
    if (ctx->pc == 0x1E1CFCu) {
        ctx->pc = 0x1E1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CF8u;
        // 0x1e1cfc: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D00u;
        goto label_1e1d00;
    }
    ctx->pc = 0x1E1CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1D00u);
        ctx->pc = 0x1E1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CF8u;
        // 0x1e1cfc: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1CF8u, 0x1E1D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1D00u;
label_1e1d00:
    // 0x1e1d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1d04:
    // 0x1e1d04: 0x3e00008  jr          $ra
label_1e1d08:
    if (ctx->pc == 0x1E1D08u) {
        ctx->pc = 0x1E1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D04u;
        // 0x1e1d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D0Cu;
        goto label_1e1d0c;
    }
    ctx->pc = 0x1E1D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D04u;
        // 0x1e1d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1D0Cu;
label_1e1d0c:
    // 0x1e1d0c: 0x0  nop
    ctx->pc = 0x1e1d0cu;
    // NOP
    ctx->pc = 0x1e1d10u;
}
