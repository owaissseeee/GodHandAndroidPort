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

// Function: cDamageUnit_SetDamageCollOffset
// Address: 0x1fd888 - 0x1fd8d8
void cDamageUnit_SetDamageCollOffset_0x1fd888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDamageUnit_SetDamageCollOffset_0x1fd888");
#endif

    switch (ctx->pc) {
        case 0x1fd8a8u: goto label_1fd8a8;
        case 0x1fd8b4u: goto label_1fd8b4;
        default: break;
    }

    ctx->pc = 0x1fd888u;

    // 0x1fd888: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fd888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fd88c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fd88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fd890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd894: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fd894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fd898: 0x8c90003c  lw          $s0, 0x3C($a0)
    ctx->pc = 0x1fd898u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1fd89c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD89Cu;
    {
        const bool branch_taken_0x1fd89c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD89Cu;
        // 0x1fd8a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd89c) {
            ctx->pc = 0x1FD8C0u;
            goto label_1fd8c0;
        }
    }
    ctx->pc = 0x1FD8A4u;
    // 0x1fd8a4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1fd8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1fd8a8:
    // 0x1fd8a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fd8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd8ac: 0xc0aec96  jal         func_2BB258
    ctx->pc = 0x1FD8ACu;
    SET_GPR_U32(ctx, 31, 0x1FD8B4u);
    ctx->pc = 0x1FD8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD8ACu;
    // 0x1fd8b0: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB258u, 0x1FD8ACu, 0x1FD8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD8B4u;
label_1fd8b4:
    // 0x1fd8b4: 0x8e100024  lw          $s0, 0x24($s0)
    ctx->pc = 0x1fd8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1fd8b8: 0x5600fffb  bnel        $s0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FD8B8u;
    {
        const bool branch_taken_0x1fd8b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd8b8) {
            ctx->pc = 0x1FD8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD8B8u;
            // 0x1fd8bc: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd8a8;
        }
    }
    ctx->pc = 0x1FD8C0u;
label_1fd8c0:
    // 0x1fd8c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fd8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd8c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fd8c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd8c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8CCu;
        // 0x1fd8d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD8D4u;
    // 0x1fd8d4: 0x0  nop
    ctx->pc = 0x1fd8d4u;
    // NOP
    ctx->pc = 0x1fd8d8u;
}
