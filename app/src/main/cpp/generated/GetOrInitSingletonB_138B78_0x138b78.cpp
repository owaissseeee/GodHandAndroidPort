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

// Function: GetOrInitSingletonB_138B78
// Address: 0x138b78 - 0x138bb8
void GetOrInitSingletonB_138B78_0x138b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInitSingletonB_138B78_0x138b78");
#endif

    switch (ctx->pc) {
        case 0x138ba4u: goto label_138ba4;
        default: break;
    }

    ctx->pc = 0x138b78u;

    // 0x138b78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138b7c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x138b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x138b80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x138b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x138b84: 0x8c620d20  lw          $v0, 0xD20($v1)
    ctx->pc = 0x138b84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D20u));
    // 0x138b88: 0x24700d20  addiu       $s0, $v1, 0xD20
    ctx->pc = 0x138b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3360));
    // 0x138b8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x138B8Cu;
    {
        const bool branch_taken_0x138b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B8Cu;
        // 0x138b90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b8c) {
            ctx->pc = 0x138BA4u;
            goto label_138ba4;
        }
    }
    ctx->pc = 0x138B94u;
    // 0x138b94: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x138b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x138b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b9c: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x138B9Cu;
    SET_GPR_U32(ctx, 31, 0x138BA4u);
    ctx->pc = 0x138BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138B9Cu;
    // 0x138ba0: 0x24a5d8d8  addiu       $a1, $a1, -0x2728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x138B9Cu, 0x138BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138BA4u;
label_138ba4:
    // 0x138ba4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x138ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138bac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x138bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x138BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BB0u;
        // 0x138bb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138BB8u;
}
