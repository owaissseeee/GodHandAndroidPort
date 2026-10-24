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

// Function: func_00374570
// Address: 0x374570 - 0x374598
void func_00374570_0x374570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00374570_0x374570");
#endif

    switch (ctx->pc) {
        case 0x37458cu: goto label_37458c;
        default: break;
    }

    ctx->pc = 0x374570u;

    // 0x374570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374578: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x374578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37457c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37457Cu;
    {
        const bool branch_taken_0x37457c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x374580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37457Cu;
        // 0x374580: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37457c) {
            ctx->pc = 0x374590u;
            goto label_374590;
        }
    }
    ctx->pc = 0x374584u;
    // 0x374584: 0xc0cb810  jal         func_32E040
    ctx->pc = 0x374584u;
    SET_GPR_U32(ctx, 31, 0x37458Cu);
    ctx->pc = 0x374588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374584u;
    // 0x374588: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E040u, 0x374584u, 0x37458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37458Cu;
label_37458c:
    // 0x37458c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37458cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_374590:
    // 0x374590: 0x3e00008  jr          $ra
    ctx->pc = 0x374590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374590u;
        // 0x374594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374598u;
}
