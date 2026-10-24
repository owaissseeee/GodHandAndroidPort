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

// Function: UpdateChildAndFreeSoundHandle
// Address: 0x384c60 - 0x384ca0
void UpdateChildAndFreeSoundHandle_0x384c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateChildAndFreeSoundHandle_0x384c60");
#endif

    switch (ctx->pc) {
        case 0x384c78u: goto label_384c78;
        case 0x384c8cu: goto label_384c8c;
        default: break;
    }

    ctx->pc = 0x384c60u;

    // 0x384c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x384c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x384c64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x384c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x384c68: 0x24900370  addiu       $s0, $a0, 0x370
    ctx->pc = 0x384c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 880));
    // 0x384c6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x384c70: 0xc0e0d0e  jal         func_383438
    ctx->pc = 0x384C70u;
    SET_GPR_U32(ctx, 31, 0x384C78u);
    ctx->pc = 0x384C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384C70u;
    // 0x384c74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383438u, 0x384C70u, 0x384C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384C78u;
label_384c78:
    // 0x384c78: 0x8e0400fc  lw          $a0, 0xFC($s0)
    ctx->pc = 0x384c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x384c7c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x384C7Cu;
    {
        const bool branch_taken_0x384c7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x384c7c) {
            ctx->pc = 0x384C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384C7Cu;
            // 0x384c80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384C94u;
            goto label_384c94;
        }
    }
    ctx->pc = 0x384C84u;
    // 0x384c84: 0xc0c7240  jal         func_31C900
    ctx->pc = 0x384C84u;
    SET_GPR_U32(ctx, 31, 0x384C8Cu);
    ctx->pc = 0x31C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C900u, 0x384C84u, 0x384C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384C8Cu;
label_384c8c:
    // 0x384c8c: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x384c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x384c90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x384c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_384c94:
    // 0x384c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384c98: 0x3e00008  jr          $ra
    ctx->pc = 0x384C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C98u;
        // 0x384c9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384CA0u;
}
