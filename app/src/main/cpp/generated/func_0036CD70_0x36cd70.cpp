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

// Function: func_0036CD70
// Address: 0x36cd70 - 0x36cd98
void func_0036CD70_0x36cd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CD70_0x36cd70");
#endif

    switch (ctx->pc) {
        case 0x36cd70u: goto label_36cd70;
        case 0x36cd74u: goto label_36cd74;
        case 0x36cd78u: goto label_36cd78;
        case 0x36cd7cu: goto label_36cd7c;
        case 0x36cd80u: goto label_36cd80;
        case 0x36cd84u: goto label_36cd84;
        case 0x36cd88u: goto label_36cd88;
        case 0x36cd8cu: goto label_36cd8c;
        case 0x36cd90u: goto label_36cd90;
        case 0x36cd94u: goto label_36cd94;
        default: break;
    }

    ctx->pc = 0x36cd70u;

label_36cd70:
    // 0x36cd70: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_36cd74:
    // 0x36cd74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cd74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36cd78:
    // 0x36cd78: 0x8c422010  lw          $v0, 0x2010($v0)
    ctx->pc = 0x36cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8208)));
label_36cd7c:
    // 0x36cd7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_36cd80:
    if (ctx->pc == 0x36CD80u) {
        ctx->pc = 0x36CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD7Cu;
        // 0x36cd80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CD84u;
        goto label_36cd84;
    }
    ctx->pc = 0x36CD7Cu;
    {
        const bool branch_taken_0x36cd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD7Cu;
        // 0x36cd80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cd7c) {
            ctx->pc = 0x36CD8Cu;
            goto label_36cd8c;
        }
    }
    ctx->pc = 0x36CD84u;
label_36cd84:
    // 0x36cd84: 0x40f809  jalr        $v0
label_36cd88:
    if (ctx->pc == 0x36CD88u) {
        ctx->pc = 0x36CD8Cu;
        goto label_36cd8c;
    }
    ctx->pc = 0x36CD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36CD8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CD84u, 0x36CD8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36CD8Cu;
label_36cd8c:
    // 0x36cd8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36cd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36cd90:
    // 0x36cd90: 0x3e00008  jr          $ra
label_36cd94:
    if (ctx->pc == 0x36CD94u) {
        ctx->pc = 0x36CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD90u;
        // 0x36cd94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CD98u;
        goto label_fallthrough_0x36cd90;
    }
    ctx->pc = 0x36CD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD90u;
        // 0x36cd94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36cd90:
    ctx->pc = 0x36CD98u;
}
