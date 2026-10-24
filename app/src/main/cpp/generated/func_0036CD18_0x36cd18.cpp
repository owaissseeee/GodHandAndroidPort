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

// Function: func_0036CD18
// Address: 0x36cd18 - 0x36cd48
void func_0036CD18_0x36cd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CD18_0x36cd18");
#endif

    switch (ctx->pc) {
        case 0x36cd18u: goto label_36cd18;
        case 0x36cd1cu: goto label_36cd1c;
        case 0x36cd20u: goto label_36cd20;
        case 0x36cd24u: goto label_36cd24;
        case 0x36cd28u: goto label_36cd28;
        case 0x36cd2cu: goto label_36cd2c;
        case 0x36cd30u: goto label_36cd30;
        case 0x36cd34u: goto label_36cd34;
        case 0x36cd38u: goto label_36cd38;
        case 0x36cd3cu: goto label_36cd3c;
        case 0x36cd40u: goto label_36cd40;
        case 0x36cd44u: goto label_36cd44;
        default: break;
    }

    ctx->pc = 0x36cd18u;

label_36cd18:
    // 0x36cd18: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x36cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_36cd1c:
    // 0x36cd1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cd1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36cd20:
    // 0x36cd20: 0x8c632004  lw          $v1, 0x2004($v1)
    ctx->pc = 0x36cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8196)));
label_36cd24:
    // 0x36cd24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36cd24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36cd28:
    // 0x36cd28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_36cd2c:
    if (ctx->pc == 0x36CD2Cu) {
        ctx->pc = 0x36CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD28u;
        // 0x36cd2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CD30u;
        goto label_36cd30;
    }
    ctx->pc = 0x36CD28u;
    {
        const bool branch_taken_0x36cd28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD28u;
        // 0x36cd2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cd28) {
            ctx->pc = 0x36CD38u;
            goto label_36cd38;
        }
    }
    ctx->pc = 0x36CD30u;
label_36cd30:
    // 0x36cd30: 0x60f809  jalr        $v1
label_36cd34:
    if (ctx->pc == 0x36CD34u) {
        ctx->pc = 0x36CD38u;
        goto label_36cd38;
    }
    ctx->pc = 0x36CD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x36CD38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CD30u, 0x36CD38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36CD38u;
label_36cd38:
    // 0x36cd38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36cd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36cd3c:
    // 0x36cd3c: 0x3e00008  jr          $ra
label_36cd40:
    if (ctx->pc == 0x36CD40u) {
        ctx->pc = 0x36CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD3Cu;
        // 0x36cd40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CD44u;
        goto label_36cd44;
    }
    ctx->pc = 0x36CD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD3Cu;
        // 0x36cd40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CD44u;
label_36cd44:
    // 0x36cd44: 0x0  nop
    ctx->pc = 0x36cd44u;
    // NOP
    ctx->pc = 0x36cd48u;
}
