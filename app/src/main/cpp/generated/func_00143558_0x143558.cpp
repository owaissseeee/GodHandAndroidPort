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

// Function: func_00143558
// Address: 0x143558 - 0x143598
void func_00143558_0x143558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00143558_0x143558");
#endif

    switch (ctx->pc) {
        case 0x143574u: goto label_143574;
        case 0x143584u: goto label_143584;
        default: break;
    }

    ctx->pc = 0x143558u;

    // 0x143558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14355c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14355cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143560: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x143560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x143564: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x143564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x143568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14356c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x14356Cu;
    SET_GPR_U32(ctx, 31, 0x143574u);
    ctx->pc = 0x143570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14356Cu;
    // 0x143570: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x14356Cu, 0x143574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143574u;
label_143574:
    // 0x143574: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x143574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x143578: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x143578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14357c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x14357Cu;
    SET_GPR_U32(ctx, 31, 0x143584u);
    ctx->pc = 0x143580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14357Cu;
    // 0x143580: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x14357Cu, 0x143584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143584u;
label_143584:
    // 0x143584: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x143584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14358c: 0x3e00008  jr          $ra
    ctx->pc = 0x14358Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14358Cu;
        // 0x143590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14358Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143594u;
    // 0x143594: 0x0  nop
    ctx->pc = 0x143594u;
    // NOP
    ctx->pc = 0x143598u;
}
