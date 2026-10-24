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

// Function: cIDManager_getTexAddr_2ACE28
// Address: 0x2ace28 - 0x2ace48
void cIDManager_getTexAddr_2ACE28_0x2ace28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDManager_getTexAddr_2ACE28_0x2ace28");
#endif

    switch (ctx->pc) {
        case 0x2ace3cu: goto label_2ace3c;
        default: break;
    }

    ctx->pc = 0x2ace28u;

    // 0x2ace28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ace28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ace2c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ace2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ace30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ace34: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x2ACE34u;
    SET_GPR_U32(ctx, 31, 0x2ACE3Cu);
    ctx->pc = 0x2ACE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE34u;
    // 0x2ace38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x2ACE34u, 0x2ACE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE3Cu;
label_2ace3c:
    // 0x2ace3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ace3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ace40: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE40u;
        // 0x2ace44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACE48u;
}
