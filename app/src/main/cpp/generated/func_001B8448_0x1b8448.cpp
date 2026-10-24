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

// Function: func_001B8448
// Address: 0x1b8448 - 0x1b8480
void func_001B8448_0x1b8448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B8448_0x1b8448");
#endif

    switch (ctx->pc) {
        case 0x1b8464u: goto label_1b8464;
        case 0x1b846cu: goto label_1b846c;
        default: break;
    }

    ctx->pc = 0x1b8448u;

    // 0x1b8448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b844c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b844cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8450: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b8450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b8454: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b8454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b845c: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1B845Cu;
    SET_GPR_U32(ctx, 31, 0x1B8464u);
    ctx->pc = 0x1B8460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B845Cu;
    // 0x1b8460: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1B845Cu, 0x1B8464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8464u;
label_1b8464:
    // 0x1b8464: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x1B8464u;
    SET_GPR_U32(ctx, 31, 0x1B846Cu);
    ctx->pc = 0x1B8468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8464u;
    // 0x1b8468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x1B8464u, 0x1B846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B846Cu;
label_1b846c:
    // 0x1b846c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b846cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8474: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8474u;
        // 0x1b8478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B847Cu;
    // 0x1b847c: 0x0  nop
    ctx->pc = 0x1b847cu;
    // NOP
    ctx->pc = 0x1b8480u;
}
