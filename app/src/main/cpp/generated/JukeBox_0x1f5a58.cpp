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

// Function: JukeBox
// Address: 0x1f5a58 - 0x1f5a98
void JukeBox_0x1f5a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("JukeBox_0x1f5a58");
#endif

    switch (ctx->pc) {
        case 0x1f5a74u: goto label_1f5a74;
        default: break;
    }

    ctx->pc = 0x1f5a58u;

    // 0x1f5a58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5a5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f5a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f5a60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f5a68: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x1f5a68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5a6c: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1F5A6Cu;
    SET_GPR_U32(ctx, 31, 0x1F5A74u);
    ctx->pc = 0x1F5A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A6Cu;
    // 0x1f5a70: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1F5A6Cu, 0x1F5A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A74u;
label_1f5a74:
    // 0x1f5a74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f5a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a78: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1f5a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1f5a7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f5a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5a84: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A84u;
        // 0x1f5a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5A8Cu;
    // 0x1f5a8c: 0x0  nop
    ctx->pc = 0x1f5a8cu;
    // NOP
    // 0x1f5a90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f5a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f5a94: 0x0  nop
    ctx->pc = 0x1f5a94u;
    // NOP
    ctx->pc = 0x1f5a98u;
}
