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

// Function: func_002B8A70
// Address: 0x2b8a70 - 0x2b8aa8
void func_002B8A70_0x2b8a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B8A70_0x2b8a70");
#endif

    switch (ctx->pc) {
        case 0x2b8a94u: goto label_2b8a94;
        default: break;
    }

    ctx->pc = 0x2b8a70u;

    // 0x2b8a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8a74: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2b8a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b8a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b8a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b8a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b8a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b8a84: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x2b8a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x2b8a88: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2b8a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2b8a8c: 0xc0ae28c  jal         func_2B8A30
    ctx->pc = 0x2B8A8Cu;
    SET_GPR_U32(ctx, 31, 0x2B8A94u);
    ctx->pc = 0x2B8A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A8Cu;
    // 0x2b8a90: 0x24848040  addiu       $a0, $a0, -0x7FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8A30u, 0x2B8A8Cu, 0x2B8A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8A94u;
label_2b8a94:
    // 0x2b8a94: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2b8a94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b8a98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b8a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AA0u;
        // 0x2b8aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8AA8u;
}
