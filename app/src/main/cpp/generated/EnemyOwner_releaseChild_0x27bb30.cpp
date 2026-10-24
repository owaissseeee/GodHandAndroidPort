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

// Function: EnemyOwner_releaseChild
// Address: 0x27bb30 - 0x27bb78
void EnemyOwner_releaseChild_0x27bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnemyOwner_releaseChild_0x27bb30");
#endif

    switch (ctx->pc) {
        case 0x27bb50u: goto label_27bb50;
        case 0x27bb64u: goto label_27bb64;
        default: break;
    }

    ctx->pc = 0x27bb30u;

    // 0x27bb30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27bb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27bb34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27bb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27bb38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27bb38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bb3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27bb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27bb40: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x27bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x27bb44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27bb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bb48: 0xc04d1fa  jal         func_1347E8
    ctx->pc = 0x27BB48u;
    SET_GPR_U32(ctx, 31, 0x27BB50u);
    ctx->pc = 0x27BB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BB48u;
    // 0x27bb4c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1347E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1347E8u, 0x27BB48u, 0x27BB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB50u;
label_27bb50:
    // 0x27bb50: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x27bb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x27bb54: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27BB54u;
    {
        const bool branch_taken_0x27bb54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bb54) {
            ctx->pc = 0x27BB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BB54u;
            // 0x27bb58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BB6Cu;
            goto label_27bb6c;
        }
    }
    ctx->pc = 0x27BB5Cu;
    // 0x27bb5c: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x27BB5Cu;
    SET_GPR_U32(ctx, 31, 0x27BB64u);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x27BB5Cu, 0x27BB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BB64u;
label_27bb64:
    // 0x27bb64: 0xae0015b0  sw          $zero, 0x15B0($s0)
    ctx->pc = 0x27bb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 0));
    // 0x27bb68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27bb68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27bb6c:
    // 0x27bb6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bb70: 0x3e00008  jr          $ra
    ctx->pc = 0x27BB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB70u;
        // 0x27bb74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BB78u;
}
