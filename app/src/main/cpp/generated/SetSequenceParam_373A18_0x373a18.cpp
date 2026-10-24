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

// Function: SetSequenceParam_373A18
// Address: 0x373a18 - 0x373a50
void SetSequenceParam_373A18_0x373a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSequenceParam_373A18_0x373a18");
#endif

    switch (ctx->pc) {
        case 0x373a34u: goto label_373a34;
        default: break;
    }

    ctx->pc = 0x373a18u;

    // 0x373a18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x373a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x373a1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x373a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x373a20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x373a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373a24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373a2c: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x373A2Cu;
    SET_GPR_U32(ctx, 31, 0x373A34u);
    ctx->pc = 0x373A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373A2Cu;
    // 0x373a30: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x373A2Cu, 0x373A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A34u;
label_373a34:
    // 0x373a34: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x373A34u;
    {
        const bool branch_taken_0x373a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x373a34) {
            ctx->pc = 0x373A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373A34u;
            // 0x373a38: 0xae110050  sw          $s1, 0x50($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373A3Cu;
            goto label_373a3c;
        }
    }
    ctx->pc = 0x373A3Cu;
label_373a3c:
    // 0x373a3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x373a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x373a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373a48: 0x3e00008  jr          $ra
    ctx->pc = 0x373A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A48u;
        // 0x373a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373A50u;
}
