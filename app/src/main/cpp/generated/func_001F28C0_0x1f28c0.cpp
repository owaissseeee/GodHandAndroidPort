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

// Function: func_001F28C0
// Address: 0x1f28c0 - 0x1f28f0
void func_001F28C0_0x1f28c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F28C0_0x1f28c0");
#endif

    switch (ctx->pc) {
        case 0x1f28d8u: goto label_1f28d8;
        case 0x1f28e0u: goto label_1f28e0;
        default: break;
    }

    ctx->pc = 0x1f28c0u;

    // 0x1f28c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f28c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f28c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f28c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f28c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f28c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f28cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f28ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f28d0: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x1F28D0u;
    SET_GPR_U32(ctx, 31, 0x1F28D8u);
    ctx->pc = 0x1F28D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F28D0u;
    // 0x1f28d4: 0x26040930  addiu       $a0, $s0, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x1F28D0u, 0x1F28D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28D8u;
label_1f28d8:
    // 0x1f28d8: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x1F28D8u;
    SET_GPR_U32(ctx, 31, 0x1F28E0u);
    ctx->pc = 0x1F28DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F28D8u;
    // 0x1f28dc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x1F28D8u, 0x1F28E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28E0u;
label_1f28e0:
    // 0x1f28e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f28e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f28e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f28e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f28e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F28E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F28ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28E8u;
        // 0x1f28ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F28E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F28F0u;
}
