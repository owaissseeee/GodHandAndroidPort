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

// Function: func_0036CE68
// Address: 0x36ce68 - 0x36ce90
void func_0036CE68_0x36ce68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CE68_0x36ce68");
#endif

    switch (ctx->pc) {
        case 0x36ce68u: goto label_36ce68;
        case 0x36ce6cu: goto label_36ce6c;
        case 0x36ce70u: goto label_36ce70;
        case 0x36ce74u: goto label_36ce74;
        case 0x36ce78u: goto label_36ce78;
        case 0x36ce7cu: goto label_36ce7c;
        case 0x36ce80u: goto label_36ce80;
        case 0x36ce84u: goto label_36ce84;
        case 0x36ce88u: goto label_36ce88;
        case 0x36ce8cu: goto label_36ce8c;
        default: break;
    }

    ctx->pc = 0x36ce68u;

label_36ce68:
    // 0x36ce68: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_36ce6c:
    // 0x36ce6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ce6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36ce70:
    // 0x36ce70: 0x8c422034  lw          $v0, 0x2034($v0)
    ctx->pc = 0x36ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8244)));
label_36ce74:
    // 0x36ce74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_36ce78:
    if (ctx->pc == 0x36CE78u) {
        ctx->pc = 0x36CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE74u;
        // 0x36ce78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CE7Cu;
        goto label_36ce7c;
    }
    ctx->pc = 0x36CE74u;
    {
        const bool branch_taken_0x36ce74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE74u;
        // 0x36ce78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ce74) {
            ctx->pc = 0x36CE84u;
            goto label_36ce84;
        }
    }
    ctx->pc = 0x36CE7Cu;
label_36ce7c:
    // 0x36ce7c: 0x40f809  jalr        $v0
label_36ce80:
    if (ctx->pc == 0x36CE80u) {
        ctx->pc = 0x36CE84u;
        goto label_36ce84;
    }
    ctx->pc = 0x36CE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36CE84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CE7Cu, 0x36CE84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36CE84u;
label_36ce84:
    // 0x36ce84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ce84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36ce88:
    // 0x36ce88: 0x3e00008  jr          $ra
label_36ce8c:
    if (ctx->pc == 0x36CE8Cu) {
        ctx->pc = 0x36CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE88u;
        // 0x36ce8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CE90u;
        goto label_fallthrough_0x36ce88;
    }
    ctx->pc = 0x36CE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE88u;
        // 0x36ce8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36ce88:
    ctx->pc = 0x36CE90u;
}
