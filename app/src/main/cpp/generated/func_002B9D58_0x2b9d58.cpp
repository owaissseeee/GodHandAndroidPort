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

// Function: func_002B9D58
// Address: 0x2b9d58 - 0x2b9db8
void func_002B9D58_0x2b9d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B9D58_0x2b9d58");
#endif

    switch (ctx->pc) {
        case 0x2b9d70u: goto label_2b9d70;
        case 0x2b9d80u: goto label_2b9d80;
        case 0x2b9d88u: goto label_2b9d88;
        case 0x2b9da0u: goto label_2b9da0;
        default: break;
    }

    ctx->pc = 0x2b9d58u;

    // 0x2b9d58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b9d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b9d5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b9d60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b9d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b9d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b9d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b9d68: 0xc0ae894  jal         func_2BA250
    ctx->pc = 0x2B9D68u;
    SET_GPR_U32(ctx, 31, 0x2B9D70u);
    ctx->pc = 0x2B9D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D68u;
    // 0x2b9d6c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA250u, 0x2B9D68u, 0x2B9D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9D70u;
label_2b9d70:
    // 0x2b9d70: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x2b9d70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b9d74: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B9D74u;
    {
        const bool branch_taken_0x2b9d74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d74) {
            ctx->pc = 0x2B9D98u;
            goto label_2b9d98;
        }
    }
    ctx->pc = 0x2B9D7Cu;
    // 0x2b9d7c: 0x0  nop
    ctx->pc = 0x2b9d7cu;
    // NOP
label_2b9d80:
    // 0x2b9d80: 0xc0ae2aa  jal         func_2B8AA8
    ctx->pc = 0x2B9D80u;
    SET_GPR_U32(ctx, 31, 0x2B9D88u);
    ctx->pc = 0x2B9D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D80u;
    // 0x2b9d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8AA8u, 0x2B9D80u, 0x2B9D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9D88u;
label_2b9d88:
    // 0x2b9d88: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2b9d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b9d8c: 0x0  nop
    ctx->pc = 0x2b9d8cu;
    // NOP
    // 0x2b9d90: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B9D90u;
    {
        const bool branch_taken_0x2b9d90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d90) {
            ctx->pc = 0x2B9D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9d80;
        }
    }
    ctx->pc = 0x2B9D98u;
label_2b9d98:
    // 0x2b9d98: 0xc0ae3d2  jal         func_2B8F48
    ctx->pc = 0x2B9D98u;
    SET_GPR_U32(ctx, 31, 0x2B9DA0u);
    ctx->pc = 0x2B9D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9D98u;
    // 0x2b9d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8F48u, 0x2B9D98u, 0x2B9DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DA0u;
label_2b9da0:
    // 0x2b9da0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b9da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b9da4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b9da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9da8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b9da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9dac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DACu;
        // 0x2b9db0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9DB4u;
    // 0x2b9db4: 0x0  nop
    ctx->pc = 0x2b9db4u;
    // NOP
    ctx->pc = 0x2b9db8u;
}
