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

// Function: func_001F2990
// Address: 0x1f2990 - 0x1f29c0
void func_001F2990_0x1f2990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F2990_0x1f2990");
#endif

    switch (ctx->pc) {
        case 0x1f29a8u: goto label_1f29a8;
        case 0x1f29b0u: goto label_1f29b0;
        default: break;
    }

    ctx->pc = 0x1f2990u;

    // 0x1f2990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f2990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f2994: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f2994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f2998: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f2998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f299c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f299cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f29a0: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1F29A0u;
    SET_GPR_U32(ctx, 31, 0x1F29A8u);
    ctx->pc = 0x1F29A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F29A0u;
    // 0x1f29a4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1F29A0u, 0x1F29A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F29A8u;
label_1f29a8:
    // 0x1f29a8: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1F29A8u;
    SET_GPR_U32(ctx, 31, 0x1F29B0u);
    ctx->pc = 0x1F29ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F29A8u;
    // 0x1f29ac: 0x26040930  addiu       $a0, $s0, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1F29A8u, 0x1F29B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F29B0u;
label_1f29b0:
    // 0x1f29b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f29b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f29b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f29b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f29b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F29B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F29BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29B8u;
        // 0x1f29bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F29B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F29C0u;
}
