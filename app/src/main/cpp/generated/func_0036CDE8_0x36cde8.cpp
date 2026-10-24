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

// Function: func_0036CDE8
// Address: 0x36cde8 - 0x36ce10
void func_0036CDE8_0x36cde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CDE8_0x36cde8");
#endif

    switch (ctx->pc) {
        case 0x36cde8u: goto label_36cde8;
        case 0x36cdecu: goto label_36cdec;
        case 0x36cdf0u: goto label_36cdf0;
        case 0x36cdf4u: goto label_36cdf4;
        case 0x36cdf8u: goto label_36cdf8;
        case 0x36cdfcu: goto label_36cdfc;
        case 0x36ce00u: goto label_36ce00;
        case 0x36ce04u: goto label_36ce04;
        case 0x36ce08u: goto label_36ce08;
        case 0x36ce0cu: goto label_36ce0c;
        default: break;
    }

    ctx->pc = 0x36cde8u;

label_36cde8:
    // 0x36cde8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_36cdec:
    // 0x36cdec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cdecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36cdf0:
    // 0x36cdf0: 0x8c422028  lw          $v0, 0x2028($v0)
    ctx->pc = 0x36cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8232)));
label_36cdf4:
    // 0x36cdf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_36cdf8:
    if (ctx->pc == 0x36CDF8u) {
        ctx->pc = 0x36CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CDF4u;
        // 0x36cdf8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CDFCu;
        goto label_36cdfc;
    }
    ctx->pc = 0x36CDF4u;
    {
        const bool branch_taken_0x36cdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CDF4u;
        // 0x36cdf8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cdf4) {
            ctx->pc = 0x36CE04u;
            goto label_36ce04;
        }
    }
    ctx->pc = 0x36CDFCu;
label_36cdfc:
    // 0x36cdfc: 0x40f809  jalr        $v0
label_36ce00:
    if (ctx->pc == 0x36CE00u) {
        ctx->pc = 0x36CE04u;
        goto label_36ce04;
    }
    ctx->pc = 0x36CDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36CE04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CDFCu, 0x36CE04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36CE04u;
label_36ce04:
    // 0x36ce04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ce04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36ce08:
    // 0x36ce08: 0x3e00008  jr          $ra
label_36ce0c:
    if (ctx->pc == 0x36CE0Cu) {
        ctx->pc = 0x36CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE08u;
        // 0x36ce0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CE10u;
        goto label_fallthrough_0x36ce08;
    }
    ctx->pc = 0x36CE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE08u;
        // 0x36ce0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36ce08:
    ctx->pc = 0x36CE10u;
}
