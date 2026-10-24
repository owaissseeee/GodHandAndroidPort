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

// Function: func_0036CD48
// Address: 0x36cd48 - 0x36cd70
void func_0036CD48_0x36cd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CD48_0x36cd48");
#endif

    switch (ctx->pc) {
        case 0x36cd48u: goto label_36cd48;
        case 0x36cd4cu: goto label_36cd4c;
        case 0x36cd50u: goto label_36cd50;
        case 0x36cd54u: goto label_36cd54;
        case 0x36cd58u: goto label_36cd58;
        case 0x36cd5cu: goto label_36cd5c;
        case 0x36cd60u: goto label_36cd60;
        case 0x36cd64u: goto label_36cd64;
        case 0x36cd68u: goto label_36cd68;
        case 0x36cd6cu: goto label_36cd6c;
        default: break;
    }

    ctx->pc = 0x36cd48u;

label_36cd48:
    // 0x36cd48: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_36cd4c:
    // 0x36cd4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cd4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36cd50:
    // 0x36cd50: 0x8c422008  lw          $v0, 0x2008($v0)
    ctx->pc = 0x36cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8200)));
label_36cd54:
    // 0x36cd54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_36cd58:
    if (ctx->pc == 0x36CD58u) {
        ctx->pc = 0x36CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD54u;
        // 0x36cd58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CD5Cu;
        goto label_36cd5c;
    }
    ctx->pc = 0x36CD54u;
    {
        const bool branch_taken_0x36cd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD54u;
        // 0x36cd58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cd54) {
            ctx->pc = 0x36CD64u;
            goto label_36cd64;
        }
    }
    ctx->pc = 0x36CD5Cu;
label_36cd5c:
    // 0x36cd5c: 0x40f809  jalr        $v0
label_36cd60:
    if (ctx->pc == 0x36CD60u) {
        ctx->pc = 0x36CD64u;
        goto label_36cd64;
    }
    ctx->pc = 0x36CD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36CD64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CD5Cu, 0x36CD64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36CD64u;
label_36cd64:
    // 0x36cd64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36cd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36cd68:
    // 0x36cd68: 0x3e00008  jr          $ra
label_36cd6c:
    if (ctx->pc == 0x36CD6Cu) {
        ctx->pc = 0x36CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD68u;
        // 0x36cd6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CD70u;
        goto label_fallthrough_0x36cd68;
    }
    ctx->pc = 0x36CD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD68u;
        // 0x36cd6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36cd68:
    ctx->pc = 0x36CD70u;
}
