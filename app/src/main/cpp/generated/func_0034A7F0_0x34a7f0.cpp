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

// Function: func_0034A7F0
// Address: 0x34a7f0 - 0x34a818
void func_0034A7F0_0x34a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034A7F0_0x34a7f0");
#endif

    switch (ctx->pc) {
        case 0x34a804u: goto label_34a804;
        default: break;
    }

    ctx->pc = 0x34a7f0u;

    // 0x34a7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34a7f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34a7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34a7f8: 0x8c822004  lw          $v0, 0x2004($a0)
    ctx->pc = 0x34a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x34a7fc: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x34A7FCu;
    SET_GPR_U32(ctx, 31, 0x34A804u);
    ctx->pc = 0x34A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A7FCu;
    // 0x34a800: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x34A7FCu, 0x34A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A804u;
label_34a804:
    // 0x34a804: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x34a804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x34a808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34a808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a80c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x34a80cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x34a810: 0x3e00008  jr          $ra
    ctx->pc = 0x34A810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A810u;
        // 0x34a814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A818u;
}
