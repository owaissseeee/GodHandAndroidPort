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

// Function: func_002D58E8
// Address: 0x2d58e8 - 0x2d5918
void func_002D58E8_0x2d58e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D58E8_0x2d58e8");
#endif

    switch (ctx->pc) {
        case 0x2d5908u: goto label_2d5908;
        default: break;
    }

    ctx->pc = 0x2d58e8u;

    // 0x2d58e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d58e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d58ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d58ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d58f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d58f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d58f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d58f8: 0xa443001e  sh          $v1, 0x1E($v0)
    ctx->pc = 0x2d58f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d58fc: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x2d58fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x2d5900: 0xc0b5646  jal         func_2D5918
    ctx->pc = 0x2D5900u;
    SET_GPR_U32(ctx, 31, 0x2D5908u);
    ctx->pc = 0x2D5904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5900u;
    // 0x2d5904: 0xac460018  sw          $a2, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5918u, 0x2D5900u, 0x2D5908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5908u;
label_2d5908:
    // 0x2d5908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d590c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D590Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D590Cu;
        // 0x2d5910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D590Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5914u;
    // 0x2d5914: 0x0  nop
    ctx->pc = 0x2d5914u;
    // NOP
    ctx->pc = 0x2d5918u;
}
