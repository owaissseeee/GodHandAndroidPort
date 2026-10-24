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

// Function: func_001661A0
// Address: 0x1661a0 - 0x1661d8
void func_001661A0_0x1661a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001661A0_0x1661a0");
#endif

    switch (ctx->pc) {
        case 0x1661b8u: goto label_1661b8;
        case 0x1661c0u: goto label_1661c0;
        case 0x1661c8u: goto label_1661c8;
        default: break;
    }

    ctx->pc = 0x1661a0u;

    // 0x1661a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1661a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1661a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1661a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1661a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1661a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1661ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1661acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1661b0: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x1661B0u;
    SET_GPR_U32(ctx, 31, 0x1661B8u);
    ctx->pc = 0x1661B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661B0u;
    // 0x1661b4: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x1661B0u, 0x1661B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1661B8u;
label_1661b8:
    // 0x1661b8: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x1661B8u;
    SET_GPR_U32(ctx, 31, 0x1661C0u);
    ctx->pc = 0x1661BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661B8u;
    // 0x1661bc: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x1661B8u, 0x1661C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1661C0u;
label_1661c0:
    // 0x1661c0: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x1661C0u;
    SET_GPR_U32(ctx, 31, 0x1661C8u);
    ctx->pc = 0x1661C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661C0u;
    // 0x1661c4: 0x26040230  addiu       $a0, $s0, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x1661C0u, 0x1661C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1661C8u;
label_1661c8:
    // 0x1661c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1661c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1661cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1661ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1661d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1661D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1661D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661D0u;
        // 0x1661d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1661D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1661D8u;
}
