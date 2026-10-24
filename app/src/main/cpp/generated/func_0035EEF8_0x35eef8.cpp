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

// Function: func_0035EEF8
// Address: 0x35eef8 - 0x35ef30
void func_0035EEF8_0x35eef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035EEF8_0x35eef8");
#endif

    switch (ctx->pc) {
        case 0x35eef8u: goto label_35eef8;
        case 0x35eefcu: goto label_35eefc;
        case 0x35ef00u: goto label_35ef00;
        case 0x35ef04u: goto label_35ef04;
        case 0x35ef08u: goto label_35ef08;
        case 0x35ef0cu: goto label_35ef0c;
        case 0x35ef10u: goto label_35ef10;
        case 0x35ef14u: goto label_35ef14;
        case 0x35ef18u: goto label_35ef18;
        case 0x35ef1cu: goto label_35ef1c;
        case 0x35ef20u: goto label_35ef20;
        case 0x35ef24u: goto label_35ef24;
        case 0x35ef28u: goto label_35ef28;
        case 0x35ef2cu: goto label_35ef2c;
        default: break;
    }

    ctx->pc = 0x35eef8u;

label_35eef8:
    // 0x35eef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35eef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_35eefc:
    // 0x35eefc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35eefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_35ef00:
    // 0x35ef00: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x35ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_35ef04:
    // 0x35ef04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_35ef08:
    if (ctx->pc == 0x35EF08u) {
        ctx->pc = 0x35EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF04u;
        // 0x35ef08: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EF0Cu;
        goto label_35ef0c;
    }
    ctx->pc = 0x35EF04u;
    {
        const bool branch_taken_0x35ef04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF04u;
        // 0x35ef08: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ef04) {
            ctx->pc = 0x35EF14u;
            goto label_35ef14;
        }
    }
    ctx->pc = 0x35EF0Cu;
label_35ef0c:
    // 0x35ef0c: 0x40f809  jalr        $v0
label_35ef10:
    if (ctx->pc == 0x35EF10u) {
        ctx->pc = 0x35EF14u;
        goto label_35ef14;
    }
    ctx->pc = 0x35EF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35EF14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EF0Cu, 0x35EF14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35EF14u;
label_35ef14:
    // 0x35ef14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ef14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35ef18:
    // 0x35ef18: 0x3e00008  jr          $ra
label_35ef1c:
    if (ctx->pc == 0x35EF1Cu) {
        ctx->pc = 0x35EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF18u;
        // 0x35ef1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35EF20u;
        goto label_35ef20;
    }
    ctx->pc = 0x35EF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF18u;
        // 0x35ef1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EF20u;
label_35ef20:
    // 0x35ef20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35ef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35ef24:
    // 0x35ef24: 0x0  nop
    ctx->pc = 0x35ef24u;
    // NOP
label_35ef28:
    // 0x35ef28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35ef28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35ef2c:
    // 0x35ef2c: 0x0  nop
    ctx->pc = 0x35ef2cu;
    // NOP
    ctx->pc = 0x35ef30u;
}
