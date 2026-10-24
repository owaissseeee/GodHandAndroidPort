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

// Function: func_0036CE10
// Address: 0x36ce10 - 0x36ce38
void func_0036CE10_0x36ce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CE10_0x36ce10");
#endif

    switch (ctx->pc) {
        case 0x36ce10u: goto label_36ce10;
        case 0x36ce14u: goto label_36ce14;
        case 0x36ce18u: goto label_36ce18;
        case 0x36ce1cu: goto label_36ce1c;
        case 0x36ce20u: goto label_36ce20;
        case 0x36ce24u: goto label_36ce24;
        case 0x36ce28u: goto label_36ce28;
        case 0x36ce2cu: goto label_36ce2c;
        case 0x36ce30u: goto label_36ce30;
        case 0x36ce34u: goto label_36ce34;
        default: break;
    }

    ctx->pc = 0x36ce10u;

label_36ce10:
    // 0x36ce10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_36ce14:
    // 0x36ce14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ce14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36ce18:
    // 0x36ce18: 0x8c42202c  lw          $v0, 0x202C($v0)
    ctx->pc = 0x36ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8236)));
label_36ce1c:
    // 0x36ce1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_36ce20:
    if (ctx->pc == 0x36CE20u) {
        ctx->pc = 0x36CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE1Cu;
        // 0x36ce20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CE24u;
        goto label_36ce24;
    }
    ctx->pc = 0x36CE1Cu;
    {
        const bool branch_taken_0x36ce1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE1Cu;
        // 0x36ce20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ce1c) {
            ctx->pc = 0x36CE2Cu;
            goto label_36ce2c;
        }
    }
    ctx->pc = 0x36CE24u;
label_36ce24:
    // 0x36ce24: 0x40f809  jalr        $v0
label_36ce28:
    if (ctx->pc == 0x36CE28u) {
        ctx->pc = 0x36CE2Cu;
        goto label_36ce2c;
    }
    ctx->pc = 0x36CE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36CE2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CE24u, 0x36CE2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36CE2Cu;
label_36ce2c:
    // 0x36ce2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ce2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36ce30:
    // 0x36ce30: 0x3e00008  jr          $ra
label_36ce34:
    if (ctx->pc == 0x36CE34u) {
        ctx->pc = 0x36CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE30u;
        // 0x36ce34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CE38u;
        goto label_fallthrough_0x36ce30;
    }
    ctx->pc = 0x36CE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE30u;
        // 0x36ce34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36ce30:
    ctx->pc = 0x36CE38u;
}
