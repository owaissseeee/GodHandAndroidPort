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

// Function: func_003404B0
// Address: 0x3404b0 - 0x3404f0
void func_003404B0_0x3404b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003404B0_0x3404b0");
#endif

    switch (ctx->pc) {
        case 0x3404ccu: goto label_3404cc;
        default: break;
    }

    ctx->pc = 0x3404b0u;

    // 0x3404b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3404b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3404b4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x3404b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x3404b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3404b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3404bc: 0x2484c420  addiu       $a0, $a0, -0x3BE0
    ctx->pc = 0x3404bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951968));
    // 0x3404c0: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x3404c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x3404c4: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x3404C4u;
    SET_GPR_U32(ctx, 31, 0x3404CCu);
    ctx->pc = 0x3404C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3404C4u;
    // 0x3404c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x3404C4u, 0x3404CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3404CCu;
label_3404cc:
    // 0x3404cc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x3404ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x3404d0: 0x2463c450  addiu       $v1, $v1, -0x3BB0
    ctx->pc = 0x3404d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952016));
    // 0x3404d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3404d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3404d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3404d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EC450u));
    // 0x3404dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3404dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3404e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3404e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EC450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EC450u, _value); } while (0);
    // 0x3404e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3404E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3404E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3404E4u;
        // 0x3404e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3404E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3404ECu;
    // 0x3404ec: 0x0  nop
    ctx->pc = 0x3404ecu;
    // NOP
    ctx->pc = 0x3404f0u;
}
