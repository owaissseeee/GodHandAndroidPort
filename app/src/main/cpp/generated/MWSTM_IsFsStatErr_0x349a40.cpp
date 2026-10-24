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

// Function: MWSTM_IsFsStatErr
// Address: 0x349a40 - 0x349a68
void MWSTM_IsFsStatErr_0x349a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MWSTM_IsFsStatErr_0x349a40");
#endif

    switch (ctx->pc) {
        case 0x349a50u: goto label_349a50;
        default: break;
    }

    ctx->pc = 0x349a40u;

    // 0x349a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349a48: 0xc0ca026  jal         func_328098
    ctx->pc = 0x349A48u;
    SET_GPR_U32(ctx, 31, 0x349A50u);
    ctx->pc = 0x328098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328098u, 0x349A48u, 0x349A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349A50u;
label_349a50:
    // 0x349a50: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x349a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x349a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349a58: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x349a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x349a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x349A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349A5Cu;
        // 0x349a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349A64u;
    // 0x349a64: 0x0  nop
    ctx->pc = 0x349a64u;
    // NOP
    ctx->pc = 0x349a68u;
}
