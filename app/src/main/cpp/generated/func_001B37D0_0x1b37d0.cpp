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

// Function: func_001B37D0
// Address: 0x1b37d0 - 0x1b3800
void func_001B37D0_0x1b37d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B37D0_0x1b37d0");
#endif

    switch (ctx->pc) {
        case 0x1b37e4u: goto label_1b37e4;
        default: break;
    }

    ctx->pc = 0x1b37d0u;

    // 0x1b37d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b37d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b37d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b37d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b37d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b37d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b37dc: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1B37DCu;
    SET_GPR_U32(ctx, 31, 0x1B37E4u);
    ctx->pc = 0x1B37E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B37DCu;
    // 0x1b37e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1B37DCu, 0x1B37E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37E4u;
label_1b37e4:
    // 0x1b37e4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1b37e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b37e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b37ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b37ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b37f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b37f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b37f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B37F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37F4u;
        // 0x1b37f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B37F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B37FCu;
    // 0x1b37fc: 0x0  nop
    ctx->pc = 0x1b37fcu;
    // NOP
    ctx->pc = 0x1b3800u;
}
