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

// Function: InitClearStructAndSet_1E79A8
// Address: 0x1e79a8 - 0x1e79e8
void InitClearStructAndSet_1E79A8_0x1e79a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitClearStructAndSet_1E79A8_0x1e79a8");
#endif

    switch (ctx->pc) {
        case 0x1e79ccu: goto label_1e79cc;
        default: break;
    }

    ctx->pc = 0x1e79a8u;

    // 0x1e79a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e79a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e79ac: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1e79acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1e79b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e79b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e79b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e79b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e79b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e79b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e79bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e79bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e79c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e79c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e79c4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1E79C4u;
    SET_GPR_U32(ctx, 31, 0x1E79CCu);
    ctx->pc = 0x1E79C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E79C4u;
    // 0x1e79c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1E79C4u, 0x1E79CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E79CCu;
label_1e79cc:
    // 0x1e79cc: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1e79ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1e79d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e79d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e79d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e79d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e79d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e79d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e79dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E79DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E79DCu;
        // 0x1e79e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E79DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E79E4u;
    // 0x1e79e4: 0x0  nop
    ctx->pc = 0x1e79e4u;
    // NOP
    ctx->pc = 0x1e79e8u;
}
