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

// Function: sceSifExitCmd
// Address: 0x3b2450 - 0x3b2488
void sceSifExitCmd_0x3b2450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifExitCmd_0x3b2450");
#endif

    switch (ctx->pc) {
        case 0x3b2460u: goto label_3b2460;
        case 0x3b2470u: goto label_3b2470;
        default: break;
    }

    ctx->pc = 0x3b2450u;

    // 0x3b2450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b2450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b2454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b2454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b2458: 0xc0ec1ea  jal         func_3B07A8
    ctx->pc = 0x3B2458u;
    SET_GPR_U32(ctx, 31, 0x3B2460u);
    ctx->pc = 0x3B245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2458u;
    // 0x3b245c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B07A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B07A8u, 0x3B2458u, 0x3B2460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2460u;
label_3b2460:
    // 0x3b2460: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3b2460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3b2464: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3b2464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3b2468: 0xc0ebe74  jal         func_3AF9D0
    ctx->pc = 0x3B2468u;
    SET_GPR_U32(ctx, 31, 0x3B2470u);
    ctx->pc = 0x3B246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2468u;
    // 0x3b246c: 0x8c65e514  lw          $a1, -0x1AEC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF9D0u, 0x3B2468u, 0x3B2470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2470u;
label_3b2470:
    // 0x3b2470: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b2470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b2474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b2474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2478: 0xac60ae50  sw          $zero, -0x51B0($v1)
    ctx->pc = 0x3b2478u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FAE50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAE50u, _value); } while (0);
    // 0x3b247c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B247Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B247Cu;
        // 0x3b2480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B247Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2484u;
    // 0x3b2484: 0x0  nop
    ctx->pc = 0x3b2484u;
    // NOP
    ctx->pc = 0x3b2488u;
}
