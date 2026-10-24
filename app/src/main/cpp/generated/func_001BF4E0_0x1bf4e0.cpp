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

// Function: func_001BF4E0
// Address: 0x1bf4e0 - 0x1bf518
void func_001BF4E0_0x1bf4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BF4E0_0x1bf4e0");
#endif

    switch (ctx->pc) {
        case 0x1bf4f4u: goto label_1bf4f4;
        default: break;
    }

    ctx->pc = 0x1bf4e0u;

    // 0x1bf4e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bf4e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bf4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bf4e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bf4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bf4ec: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1BF4ECu;
    SET_GPR_U32(ctx, 31, 0x1BF4F4u);
    ctx->pc = 0x1BF4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF4ECu;
    // 0x1bf4f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1BF4ECu, 0x1BF4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF4F4u;
label_1bf4f4:
    // 0x1bf4f4: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x1bf4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1bf4f8: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x1bf4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1bf4fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bf500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf504: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1bf504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1bf508: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x1bf508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x1bf50c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bf50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf510: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF510u;
        // 0x1bf514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF518u;
}
