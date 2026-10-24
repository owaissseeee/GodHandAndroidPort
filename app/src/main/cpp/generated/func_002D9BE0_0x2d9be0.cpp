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

// Function: func_002D9BE0
// Address: 0x2d9be0 - 0x2d9c10
void func_002D9BE0_0x2d9be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D9BE0_0x2d9be0");
#endif

    switch (ctx->pc) {
        case 0x2d9bf4u: goto label_2d9bf4;
        case 0x2d9bfcu: goto label_2d9bfc;
        default: break;
    }

    ctx->pc = 0x2d9be0u;

    // 0x2d9be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d9be4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d9be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d9be8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9bec: 0xc0b6704  jal         func_2D9C10
    ctx->pc = 0x2D9BECu;
    SET_GPR_U32(ctx, 31, 0x2D9BF4u);
    ctx->pc = 0x2D9BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9BECu;
    // 0x2d9bf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9C10u, 0x2D9BECu, 0x2D9BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9BF4u;
label_2d9bf4:
    // 0x2d9bf4: 0xc0b672a  jal         func_2D9CA8
    ctx->pc = 0x2D9BF4u;
    SET_GPR_U32(ctx, 31, 0x2D9BFCu);
    ctx->pc = 0x2D9BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9BF4u;
    // 0x2d9bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9CA8u, 0x2D9BF4u, 0x2D9BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9BFCu;
label_2d9bfc:
    // 0x2d9bfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d9bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9c04: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C04u;
        // 0x2d9c08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9C0Cu;
    // 0x2d9c0c: 0x0  nop
    ctx->pc = 0x2d9c0cu;
    // NOP
    ctx->pc = 0x2d9c10u;
}
