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

// Function: CustomIDWork__dtor
// Address: 0x2d5d80 - 0x2d5da8
void CustomIDWork__dtor_0x2d5d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork__dtor_0x2d5d80");
#endif

    switch (ctx->pc) {
        case 0x2d5d98u: goto label_2d5d98;
        default: break;
    }

    ctx->pc = 0x2d5d80u;

    // 0x2d5d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d5d84: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2d5d84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d5d88: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5D88u;
    {
        const bool branch_taken_0x2d5d88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D88u;
        // 0x2d5d8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5d88) {
            ctx->pc = 0x2D5D98u;
            goto label_2d5d98;
        }
    }
    ctx->pc = 0x2D5D90u;
    // 0x2d5d90: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x2D5D90u;
    SET_GPR_U32(ctx, 31, 0x2D5D98u);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x2D5D90u, 0x2D5D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D98u;
label_2d5d98:
    // 0x2d5d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D9Cu;
        // 0x2d5da0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5DA4u;
    // 0x2d5da4: 0x0  nop
    ctx->pc = 0x2d5da4u;
    // NOP
    ctx->pc = 0x2d5da8u;
}
