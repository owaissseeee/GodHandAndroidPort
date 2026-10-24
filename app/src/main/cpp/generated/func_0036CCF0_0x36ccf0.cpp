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

// Function: func_0036CCF0
// Address: 0x36ccf0 - 0x36cd18
void func_0036CCF0_0x36ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CCF0_0x36ccf0");
#endif

    switch (ctx->pc) {
        case 0x36ccf0u: goto label_36ccf0;
        case 0x36ccf4u: goto label_36ccf4;
        case 0x36ccf8u: goto label_36ccf8;
        case 0x36ccfcu: goto label_36ccfc;
        case 0x36cd00u: goto label_36cd00;
        case 0x36cd04u: goto label_36cd04;
        case 0x36cd08u: goto label_36cd08;
        case 0x36cd0cu: goto label_36cd0c;
        case 0x36cd10u: goto label_36cd10;
        case 0x36cd14u: goto label_36cd14;
        default: break;
    }

    ctx->pc = 0x36ccf0u;

label_36ccf0:
    // 0x36ccf0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_36ccf4:
    // 0x36ccf4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ccf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36ccf8:
    // 0x36ccf8: 0x8c422000  lw          $v0, 0x2000($v0)
    ctx->pc = 0x36ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8192)));
label_36ccfc:
    // 0x36ccfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_36cd00:
    if (ctx->pc == 0x36CD00u) {
        ctx->pc = 0x36CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CCFCu;
        // 0x36cd00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CD04u;
        goto label_36cd04;
    }
    ctx->pc = 0x36CCFCu;
    {
        const bool branch_taken_0x36ccfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CCFCu;
        // 0x36cd00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ccfc) {
            ctx->pc = 0x36CD0Cu;
            goto label_36cd0c;
        }
    }
    ctx->pc = 0x36CD04u;
label_36cd04:
    // 0x36cd04: 0x40f809  jalr        $v0
label_36cd08:
    if (ctx->pc == 0x36CD08u) {
        ctx->pc = 0x36CD0Cu;
        goto label_36cd0c;
    }
    ctx->pc = 0x36CD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36CD0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CD04u, 0x36CD0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36CD0Cu;
label_36cd0c:
    // 0x36cd0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36cd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36cd10:
    // 0x36cd10: 0x3e00008  jr          $ra
label_36cd14:
    if (ctx->pc == 0x36CD14u) {
        ctx->pc = 0x36CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD10u;
        // 0x36cd14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CD18u;
        goto label_fallthrough_0x36cd10;
    }
    ctx->pc = 0x36CD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CD10u;
        // 0x36cd14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36cd10:
    ctx->pc = 0x36CD18u;
}
