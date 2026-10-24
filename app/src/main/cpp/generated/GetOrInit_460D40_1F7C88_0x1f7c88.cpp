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

// Function: GetOrInit_460D40_1F7C88
// Address: 0x1f7c88 - 0x1f7cc8
void GetOrInit_460D40_1F7C88_0x1f7c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInit_460D40_1F7C88_0x1f7c88");
#endif

    switch (ctx->pc) {
        case 0x1f7cb4u: goto label_1f7cb4;
        default: break;
    }

    ctx->pc = 0x1f7c88u;

    // 0x1f7c88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7c8c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f7c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1f7c90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f7c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f7c94: 0x8c620d40  lw          $v0, 0xD40($v1)
    ctx->pc = 0x1f7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D40u));
    // 0x1f7c98: 0x24700d40  addiu       $s0, $v1, 0xD40
    ctx->pc = 0x1f7c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3392));
    // 0x1f7c9c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7C9Cu;
    {
        const bool branch_taken_0x1f7c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C9Cu;
        // 0x1f7ca0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c9c) {
            ctx->pc = 0x1F7CB4u;
            goto label_1f7cb4;
        }
    }
    ctx->pc = 0x1F7CA4u;
    // 0x1f7ca4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1f7ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1f7ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7cac: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x1F7CACu;
    SET_GPR_U32(ctx, 31, 0x1F7CB4u);
    ctx->pc = 0x1F7CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7CACu;
    // 0x1f7cb0: 0x24a5c348  addiu       $a1, $a1, -0x3CB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x1F7CACu, 0x1F7CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7CB4u;
label_1f7cb4:
    // 0x1f7cb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f7cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7cbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f7cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CC0u;
        // 0x1f7cc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7CC8u;
}
