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

// Function: func_00195980
// Address: 0x195980 - 0x1959a8
void func_00195980_0x195980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00195980_0x195980");
#endif

    switch (ctx->pc) {
        case 0x195980u: goto label_195980;
        case 0x195984u: goto label_195984;
        case 0x195988u: goto label_195988;
        case 0x19598cu: goto label_19598c;
        case 0x195990u: goto label_195990;
        case 0x195994u: goto label_195994;
        case 0x195998u: goto label_195998;
        case 0x19599cu: goto label_19599c;
        case 0x1959a0u: goto label_1959a0;
        case 0x1959a4u: goto label_1959a4;
        default: break;
    }

    ctx->pc = 0x195980u;

label_195980:
    // 0x195980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_195984:
    // 0x195984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_195988:
    // 0x195988: 0x8c830214  lw          $v1, 0x214($a0)
    ctx->pc = 0x195988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_19598c:
    // 0x19598c: 0x84650068  lh          $a1, 0x68($v1)
    ctx->pc = 0x19598cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_195990:
    // 0x195990: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x195990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_195994:
    // 0x195994: 0x40f809  jalr        $v0
label_195998:
    if (ctx->pc == 0x195998u) {
        ctx->pc = 0x195998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195994u;
        // 0x195998: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19599Cu;
        goto label_19599c;
    }
    ctx->pc = 0x195994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19599Cu);
        ctx->pc = 0x195998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195994u;
        // 0x195998: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195994u, 0x19599Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19599Cu;
label_19599c:
    // 0x19599c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19599cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1959a0:
    // 0x1959a0: 0x3e00008  jr          $ra
label_1959a4:
    if (ctx->pc == 0x1959A4u) {
        ctx->pc = 0x1959A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959A0u;
        // 0x1959a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1959A8u;
        goto label_fallthrough_0x1959a0;
    }
    ctx->pc = 0x1959A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1959A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959A0u;
        // 0x1959a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1959A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1959a0:
    ctx->pc = 0x1959A8u;
}
