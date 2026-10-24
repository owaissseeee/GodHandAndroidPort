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

// Function: func_002D58B8
// Address: 0x2d58b8 - 0x2d58e8
void func_002D58B8_0x2d58b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D58B8_0x2d58b8");
#endif

    switch (ctx->pc) {
        case 0x2d58d8u: goto label_2d58d8;
        default: break;
    }

    ctx->pc = 0x2d58b8u;

    // 0x2d58b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d58b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d58bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d58bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d58c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d58c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d58c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d58c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d58c8: 0xa443001e  sh          $v1, 0x1E($v0)
    ctx->pc = 0x2d58c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d58cc: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x2d58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x2d58d0: 0xc0b5646  jal         func_2D5918
    ctx->pc = 0x2D58D0u;
    SET_GPR_U32(ctx, 31, 0x2D58D8u);
    ctx->pc = 0x2D58D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D58D0u;
    // 0x2d58d4: 0xac460018  sw          $a2, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5918u, 0x2D58D0u, 0x2D58D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D58D8u;
label_2d58d8:
    // 0x2d58d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d58d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d58dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D58DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D58E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D58DCu;
        // 0x2d58e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D58DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D58E4u;
    // 0x2d58e4: 0x0  nop
    ctx->pc = 0x2d58e4u;
    // NOP
    ctx->pc = 0x2d58e8u;
}
