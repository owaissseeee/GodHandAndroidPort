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

// Function: func_00149E60
// Address: 0x149e60 - 0x149eb8
void func_00149E60_0x149e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00149E60_0x149e60");
#endif

    switch (ctx->pc) {
        case 0x149e88u: goto label_149e88;
        case 0x149e90u: goto label_149e90;
        default: break;
    }

    ctx->pc = 0x149e60u;

    // 0x149e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149e64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149e6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x149e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x149e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x149e74: 0x8e300144  lw          $s0, 0x144($s1)
    ctx->pc = 0x149e74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x149e78: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x149E78u;
    {
        const bool branch_taken_0x149e78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x149e78) {
            ctx->pc = 0x149E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149E78u;
            // 0x149e7c: 0xae200144  sw          $zero, 0x144($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149EA4u;
            goto label_149ea4;
        }
    }
    ctx->pc = 0x149E80u;
    // 0x149e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e84: 0x0  nop
    ctx->pc = 0x149e84u;
    // NOP
label_149e88:
    // 0x149e88: 0xc054040  jal         func_150100
    ctx->pc = 0x149E88u;
    SET_GPR_U32(ctx, 31, 0x149E90u);
    ctx->pc = 0x149E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E88u;
    // 0x149e8c: 0x8e100144  lw          $s0, 0x144($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150100u, 0x149E88u, 0x149E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E90u;
label_149e90:
    // 0x149e90: 0x0  nop
    ctx->pc = 0x149e90u;
    // NOP
    // 0x149e94: 0x0  nop
    ctx->pc = 0x149e94u;
    // NOP
    // 0x149e98: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x149E98u;
    {
        const bool branch_taken_0x149e98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x149E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E98u;
        // 0x149e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e98) {
            ctx->pc = 0x149E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149e88;
        }
    }
    ctx->pc = 0x149EA0u;
    // 0x149ea0: 0xae200144  sw          $zero, 0x144($s1)
    ctx->pc = 0x149ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
label_149ea4:
    // 0x149ea4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x149ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149ea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x149EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149EB0u;
        // 0x149eb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149EB8u;
}
