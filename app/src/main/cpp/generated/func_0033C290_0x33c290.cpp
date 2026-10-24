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

// Function: func_0033C290
// Address: 0x33c290 - 0x33c2c0
void func_0033C290_0x33c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033C290_0x33c290");
#endif

    switch (ctx->pc) {
        case 0x33c290u: goto label_33c290;
        case 0x33c294u: goto label_33c294;
        case 0x33c298u: goto label_33c298;
        case 0x33c29cu: goto label_33c29c;
        case 0x33c2a0u: goto label_33c2a0;
        case 0x33c2a4u: goto label_33c2a4;
        case 0x33c2a8u: goto label_33c2a8;
        case 0x33c2acu: goto label_33c2ac;
        case 0x33c2b0u: goto label_33c2b0;
        case 0x33c2b4u: goto label_33c2b4;
        case 0x33c2b8u: goto label_33c2b8;
        case 0x33c2bcu: goto label_33c2bc;
        default: break;
    }

    ctx->pc = 0x33c290u;

label_33c290:
    // 0x33c290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33c294:
    // 0x33c294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33c298:
    // 0x33c298: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x33c298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_33c29c:
    // 0x33c29c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_33c2a0:
    if (ctx->pc == 0x33C2A0u) {
        ctx->pc = 0x33C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C29Cu;
        // 0x33c2a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C2A4u;
        goto label_33c2a4;
    }
    ctx->pc = 0x33C29Cu;
    {
        const bool branch_taken_0x33c29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C29Cu;
        // 0x33c2a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c29c) {
            ctx->pc = 0x33C2B4u;
            goto label_33c2b4;
        }
    }
    ctx->pc = 0x33C2A4u;
label_33c2a4:
    // 0x33c2a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_33c2a8:
    // 0x33c2a8: 0x8c439d1c  lw          $v1, -0x62E4($v0)
    ctx->pc = 0x33c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941980)));
label_33c2ac:
    // 0x33c2ac: 0x60f809  jalr        $v1
label_33c2b0:
    if (ctx->pc == 0x33C2B0u) {
        ctx->pc = 0x33C2B4u;
        goto label_33c2b4;
    }
    ctx->pc = 0x33C2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33C2B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C2ACu, 0x33C2B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C2B4u;
label_33c2b4:
    // 0x33c2b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c2b8:
    // 0x33c2b8: 0x3e00008  jr          $ra
label_33c2bc:
    if (ctx->pc == 0x33C2BCu) {
        ctx->pc = 0x33C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2B8u;
        // 0x33c2bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C2C0u;
        goto label_fallthrough_0x33c2b8;
    }
    ctx->pc = 0x33C2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2B8u;
        // 0x33c2bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33c2b8:
    ctx->pc = 0x33C2C0u;
}
