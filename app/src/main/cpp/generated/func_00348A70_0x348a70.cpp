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

// Function: func_00348A70
// Address: 0x348a70 - 0x348aa8
void func_00348A70_0x348a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348A70_0x348a70");
#endif

    switch (ctx->pc) {
        case 0x348a94u: goto label_348a94;
        default: break;
    }

    ctx->pc = 0x348a70u;

    // 0x348a70: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x348a70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a74: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x348a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348a7c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x348a7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a80: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x348a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x348a84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x348a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348a8c: 0xc0cee04  jal         func_33B810
    ctx->pc = 0x348A8Cu;
    SET_GPR_U32(ctx, 31, 0x348A94u);
    ctx->pc = 0x348A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348A8Cu;
    // 0x348a90: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B810u, 0x348A8Cu, 0x348A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348A94u;
label_348a94:
    // 0x348a94: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x348a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x348a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348a9c: 0xac620d88  sw          $v0, 0xD88($v1)
    ctx->pc = 0x348a9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x760D88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x760D88u, _value); } while (0);
    // 0x348aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x348AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348AA0u;
        // 0x348aa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348AA8u;
}
