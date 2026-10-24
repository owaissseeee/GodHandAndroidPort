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

// Function: kputs
// Address: 0x3b7aa8 - 0x3b7ad8
void kputs_0x3b7aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kputs_0x3b7aa8");
#endif

    switch (ctx->pc) {
        case 0x3b7ac0u: goto label_3b7ac0;
        default: break;
    }

    ctx->pc = 0x3b7aa8u;

    // 0x3b7aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b7aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b7aac: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3b7aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3b7ab0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b7ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b7ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b7ab8: 0xc0ec034  jal         func_3B00D0
    ctx->pc = 0x3B7AB8u;
    SET_GPR_U32(ctx, 31, 0x3B7AC0u);
    ctx->pc = 0x3B7ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7AB8u;
    // 0x3b7abc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B00D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B00D0u, 0x3B7AB8u, 0x3B7AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7AC0u;
label_3b7ac0:
    // 0x3b7ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b7ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7AC4u;
        // 0x3b7ac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7ACCu;
    // 0x3b7acc: 0x0  nop
    ctx->pc = 0x3b7accu;
    // NOP
    // 0x3b7ad0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3b7ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3b7ad4: 0x0  nop
    ctx->pc = 0x3b7ad4u;
    // NOP
    ctx->pc = 0x3b7ad8u;
}
