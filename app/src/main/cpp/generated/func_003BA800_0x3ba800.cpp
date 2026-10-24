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

// Function: func_003BA800
// Address: 0x3ba800 - 0x3ba830
void func_003BA800_0x3ba800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BA800_0x3ba800");
#endif

    switch (ctx->pc) {
        case 0x3ba818u: goto label_3ba818;
        default: break;
    }

    ctx->pc = 0x3ba800u;

    // 0x3ba800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ba800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ba804: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BA804u;
    {
        const bool branch_taken_0x3ba804 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA804u;
        // 0x3ba808: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba804) {
            ctx->pc = 0x3BA820u;
            goto label_3ba820;
        }
    }
    ctx->pc = 0x3BA80Cu;
    // 0x3ba80c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3ba80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3ba810: 0xc0ee778  jal         func_3B9DE0
    ctx->pc = 0x3BA810u;
    SET_GPR_U32(ctx, 31, 0x3BA818u);
    ctx->pc = 0x3BA814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA810u;
    // 0x3ba814: 0x24840aa8  addiu       $a0, $a0, 0xAA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DE0u, 0x3BA810u, 0x3BA818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA818u;
label_3ba818:
    // 0x3ba818: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3BA818u;
    {
        const bool branch_taken_0x3ba818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA818u;
        // 0x3ba81c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba818) {
            ctx->pc = 0x3BA824u;
            goto label_3ba824;
        }
    }
    ctx->pc = 0x3BA820u;
label_3ba820:
    // 0x3ba820: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ba820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3ba824:
    // 0x3ba824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ba824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba828: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA828u;
        // 0x3ba82c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA830u;
}
