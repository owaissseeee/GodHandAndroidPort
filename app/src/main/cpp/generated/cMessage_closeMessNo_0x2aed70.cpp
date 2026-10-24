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

// Function: cMessage_closeMessNo
// Address: 0x2aed70 - 0x2aeda0
void cMessage_closeMessNo_0x2aed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessage_closeMessNo_0x2aed70");
#endif

    switch (ctx->pc) {
        case 0x2aed80u: goto label_2aed80;
        case 0x2aed90u: goto label_2aed90;
        default: break;
    }

    ctx->pc = 0x2aed70u;

    // 0x2aed70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aed70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aed74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aed78: 0xc0abb50  jal         func_2AED40
    ctx->pc = 0x2AED78u;
    SET_GPR_U32(ctx, 31, 0x2AED80u);
    ctx->pc = 0x2AED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED78u;
    // 0x2aed7c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AED40u, 0x2AED78u, 0x2AED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED80u;
label_2aed80:
    // 0x2aed80: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AED80u;
    {
        const bool branch_taken_0x2aed80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aed80) {
            ctx->pc = 0x2AED84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AED80u;
            // 0x2aed84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AED94u;
            goto label_2aed94;
        }
    }
    ctx->pc = 0x2AED88u;
    // 0x2aed88: 0xc0ac900  jal         func_2B2400
    ctx->pc = 0x2AED88u;
    SET_GPR_U32(ctx, 31, 0x2AED90u);
    ctx->pc = 0x2AED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED88u;
    // 0x2aed8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2400u, 0x2AED88u, 0x2AED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED90u;
label_2aed90:
    // 0x2aed90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aed90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aed94:
    // 0x2aed94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aed94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aed98: 0x3e00008  jr          $ra
    ctx->pc = 0x2AED98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED98u;
        // 0x2aed9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AED98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEDA0u;
}
