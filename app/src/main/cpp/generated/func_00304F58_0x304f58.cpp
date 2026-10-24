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

// Function: func_00304F58
// Address: 0x304f58 - 0x304f80
void func_00304F58_0x304f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00304F58_0x304f58");
#endif

    switch (ctx->pc) {
        case 0x304f74u: goto label_304f74;
        default: break;
    }

    ctx->pc = 0x304f58u;

    // 0x304f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304f5c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x304f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x304f60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304f64: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x304f64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304f68: 0x2442fcf8  addiu       $v0, $v0, -0x308
    ctx->pc = 0x304f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966520));
    // 0x304f6c: 0xc0c0a3a  jal         func_3028E8
    ctx->pc = 0x304F6Cu;
    SET_GPR_U32(ctx, 31, 0x304F74u);
    ctx->pc = 0x304F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304F6Cu;
    // 0x304f70: 0xac6200f0  sw          $v0, 0xF0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028E8u, 0x304F6Cu, 0x304F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F74u;
label_304f74:
    // 0x304f74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304f78: 0x3e00008  jr          $ra
    ctx->pc = 0x304F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F78u;
        // 0x304f7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304F80u;
}
