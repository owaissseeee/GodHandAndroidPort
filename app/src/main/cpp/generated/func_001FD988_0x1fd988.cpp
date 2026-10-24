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

// Function: func_001FD988
// Address: 0x1fd988 - 0x1fd9d8
void func_001FD988_0x1fd988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FD988_0x1fd988");
#endif

    switch (ctx->pc) {
        case 0x1fd9a0u: goto label_1fd9a0;
        case 0x1fd9b0u: goto label_1fd9b0;
        default: break;
    }

    ctx->pc = 0x1fd988u;

    // 0x1fd988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd98c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fd98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fd990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd998: 0xc07f642  jal         func_1FD908
    ctx->pc = 0x1FD998u;
    SET_GPR_U32(ctx, 31, 0x1FD9A0u);
    ctx->pc = 0x1FD99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD998u;
    // 0x1fd99c: 0xa2050048  sb          $a1, 0x48($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD908u, 0x1FD998u, 0x1FD9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD9A0u;
label_1fd9a0:
    // 0x1fd9a0: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1fd9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1fd9a4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD9A4u;
    {
        const bool branch_taken_0x1fd9a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9A4u;
        // 0x1fd9a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9a4) {
            ctx->pc = 0x1FD9C8u;
            goto label_1fd9c8;
        }
    }
    ctx->pc = 0x1FD9ACu;
    // 0x1fd9ac: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1fd9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1fd9b0:
    // 0x1fd9b0: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x1fd9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x1fd9b4: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x1fd9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1fd9b8: 0x0  nop
    ctx->pc = 0x1fd9b8u;
    // NOP
    // 0x1fd9bc: 0x0  nop
    ctx->pc = 0x1fd9bcu;
    // NOP
    // 0x1fd9c0: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FD9C0u;
    {
        const bool branch_taken_0x1fd9c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd9c0) {
            ctx->pc = 0x1FD9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD9C0u;
            // 0x1fd9c4: 0x8c620028  lw          $v0, 0x28($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd9b0;
        }
    }
    ctx->pc = 0x1FD9C8u;
label_1fd9c8:
    // 0x1fd9c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fd9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd9cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9D0u;
        // 0x1fd9d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD9D8u;
}
