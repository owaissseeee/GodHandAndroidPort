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

// Function: func_003327D8
// Address: 0x3327d8 - 0x332808
void func_003327D8_0x3327d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003327D8_0x3327d8");
#endif

    switch (ctx->pc) {
        case 0x3327f4u: goto label_3327f4;
        default: break;
    }

    ctx->pc = 0x3327d8u;

    // 0x3327d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3327d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3327dc: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3327dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3327e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3327e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3327e4: 0x244290d0  addiu       $v0, $v0, -0x6F30
    ctx->pc = 0x3327e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938832));
    // 0x3327e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3327e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3327ec: 0xc0ccfa2  jal         func_333E88
    ctx->pc = 0x3327ECu;
    SET_GPR_U32(ctx, 31, 0x3327F4u);
    ctx->pc = 0x3327F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3327ECu;
    // 0x3327f0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333E88u, 0x3327ECu, 0x3327F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3327F4u;
label_3327f4:
    // 0x3327f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3327f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3327f8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3327f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3327fc: 0x244290e8  addiu       $v0, $v0, -0x6F18
    ctx->pc = 0x3327fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938856));
    // 0x332800: 0x3e00008  jr          $ra
    ctx->pc = 0x332800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332800u;
        // 0x332804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332808u;
}
