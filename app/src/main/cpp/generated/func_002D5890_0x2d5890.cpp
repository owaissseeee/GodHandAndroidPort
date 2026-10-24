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

// Function: func_002D5890
// Address: 0x2d5890 - 0x2d58b8
void func_002D5890_0x2d5890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D5890_0x2d5890");
#endif

    switch (ctx->pc) {
        case 0x2d58a8u: goto label_2d58a8;
        default: break;
    }

    ctx->pc = 0x2d5890u;

    // 0x2d5890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d5894: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d5894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d589c: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x2d589cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x2d58a0: 0xc0b5646  jal         func_2D5918
    ctx->pc = 0x2D58A0u;
    SET_GPR_U32(ctx, 31, 0x2D58A8u);
    ctx->pc = 0x2D58A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D58A0u;
    // 0x2d58a4: 0xa440001e  sh          $zero, 0x1E($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 30), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5918u, 0x2D58A0u, 0x2D58A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D58A8u;
label_2d58a8:
    // 0x2d58a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d58a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d58ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2D58ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D58B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D58ACu;
        // 0x2d58b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D58ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D58B4u;
    // 0x2d58b4: 0x0  nop
    ctx->pc = 0x2d58b4u;
    // NOP
    ctx->pc = 0x2d58b8u;
}
