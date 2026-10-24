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

// Function: cMessage_ckMessage
// Address: 0x2aeda0 - 0x2aedc0
void cMessage_ckMessage_0x2aeda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessage_ckMessage_0x2aeda0");
#endif

    switch (ctx->pc) {
        case 0x2aedb0u: goto label_2aedb0;
        default: break;
    }

    ctx->pc = 0x2aeda0u;

    // 0x2aeda0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aeda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aeda4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aeda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aeda8: 0xc0abb50  jal         func_2AED40
    ctx->pc = 0x2AEDA8u;
    SET_GPR_U32(ctx, 31, 0x2AEDB0u);
    ctx->pc = 0x2AEDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEDA8u;
    // 0x2aedac: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AED40u, 0x2AEDA8u, 0x2AEDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEDB0u;
label_2aedb0:
    // 0x2aedb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aedb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aedb4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2aedb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2aedb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEDB8u;
        // 0x2aedbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEDC0u;
}
