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

// Function: func_0036CE90
// Address: 0x36ce90 - 0x36ceb8
void func_0036CE90_0x36ce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CE90_0x36ce90");
#endif

    switch (ctx->pc) {
        case 0x36ce90u: goto label_36ce90;
        case 0x36ce94u: goto label_36ce94;
        case 0x36ce98u: goto label_36ce98;
        case 0x36ce9cu: goto label_36ce9c;
        case 0x36cea0u: goto label_36cea0;
        case 0x36cea4u: goto label_36cea4;
        case 0x36cea8u: goto label_36cea8;
        case 0x36ceacu: goto label_36ceac;
        case 0x36ceb0u: goto label_36ceb0;
        case 0x36ceb4u: goto label_36ceb4;
        default: break;
    }

    ctx->pc = 0x36ce90u;

label_36ce90:
    // 0x36ce90: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_36ce94:
    // 0x36ce94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ce94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36ce98:
    // 0x36ce98: 0x8c422038  lw          $v0, 0x2038($v0)
    ctx->pc = 0x36ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8248)));
label_36ce9c:
    // 0x36ce9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_36cea0:
    if (ctx->pc == 0x36CEA0u) {
        ctx->pc = 0x36CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE9Cu;
        // 0x36cea0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CEA4u;
        goto label_36cea4;
    }
    ctx->pc = 0x36CE9Cu;
    {
        const bool branch_taken_0x36ce9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE9Cu;
        // 0x36cea0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ce9c) {
            ctx->pc = 0x36CEACu;
            goto label_36ceac;
        }
    }
    ctx->pc = 0x36CEA4u;
label_36cea4:
    // 0x36cea4: 0x40f809  jalr        $v0
label_36cea8:
    if (ctx->pc == 0x36CEA8u) {
        ctx->pc = 0x36CEACu;
        goto label_36ceac;
    }
    ctx->pc = 0x36CEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36CEACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CEA4u, 0x36CEACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36CEACu;
label_36ceac:
    // 0x36ceac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ceacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36ceb0:
    // 0x36ceb0: 0x3e00008  jr          $ra
label_36ceb4:
    if (ctx->pc == 0x36CEB4u) {
        ctx->pc = 0x36CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CEB0u;
        // 0x36ceb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CEB8u;
        goto label_fallthrough_0x36ceb0;
    }
    ctx->pc = 0x36CEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CEB0u;
        // 0x36ceb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36ceb0:
    ctx->pc = 0x36CEB8u;
}
