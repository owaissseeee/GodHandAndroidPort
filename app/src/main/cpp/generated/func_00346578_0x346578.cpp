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

// Function: func_00346578
// Address: 0x346578 - 0x3465b8
void func_00346578_0x346578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346578_0x346578");
#endif

    switch (ctx->pc) {
        case 0x346594u: goto label_346594;
        case 0x3465a8u: goto label_3465a8;
        default: break;
    }

    ctx->pc = 0x346578u;

    // 0x346578: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x346578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34657c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34657cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346580: 0x8c43e084  lw          $v1, -0x1F7C($v0)
    ctx->pc = 0x346580u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EE084u));
    // 0x346584: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x346584u;
    {
        const bool branch_taken_0x346584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x346588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346584u;
        // 0x346588: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346584) {
            ctx->pc = 0x3465A0u;
            goto label_3465a0;
        }
    }
    ctx->pc = 0x34658Cu;
    // 0x34658c: 0xc0d197a  jal         func_3465E8
    ctx->pc = 0x34658Cu;
    SET_GPR_U32(ctx, 31, 0x346594u);
    ctx->pc = 0x3465E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3465E8u, 0x34658Cu, 0x346594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346594u;
label_346594:
    // 0x346594: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x346594u;
    {
        const bool branch_taken_0x346594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346594u;
        // 0x346598: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346594) {
            ctx->pc = 0x3465ACu;
            goto label_3465ac;
        }
    }
    ctx->pc = 0x34659Cu;
    // 0x34659c: 0x0  nop
    ctx->pc = 0x34659cu;
    // NOP
label_3465a0:
    // 0x3465a0: 0xc0d196e  jal         func_3465B8
    ctx->pc = 0x3465A0u;
    SET_GPR_U32(ctx, 31, 0x3465A8u);
    ctx->pc = 0x3465B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3465B8u, 0x3465A0u, 0x3465A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3465A8u;
label_3465a8:
    // 0x3465a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3465a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3465ac:
    // 0x3465ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3465ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3465B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3465ACu;
        // 0x3465b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3465ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3465B4u;
    // 0x3465b4: 0x0  nop
    ctx->pc = 0x3465b4u;
    // NOP
    ctx->pc = 0x3465b8u;
}
