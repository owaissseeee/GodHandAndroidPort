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

// Function: func_00201A80
// Address: 0x201a80 - 0x201ab0
void func_00201A80_0x201a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00201A80_0x201a80");
#endif

    switch (ctx->pc) {
        case 0x201aa4u: goto label_201aa4;
        default: break;
    }

    ctx->pc = 0x201a80u;

    // 0x201a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201a84: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x201a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x201a88: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201A88u;
    {
        const bool branch_taken_0x201a88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x201A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A88u;
        // 0x201a8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a88) {
            ctx->pc = 0x201AA4u;
            goto label_201aa4;
        }
    }
    ctx->pc = 0x201A90u;
    // 0x201a90: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201A90u;
    {
        const bool branch_taken_0x201a90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A90u;
        // 0x201a94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a90) {
            ctx->pc = 0x201AA8u;
            goto label_201aa8;
        }
    }
    ctx->pc = 0x201A98u;
    // 0x201a98: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x201a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x201a9c: 0xc0802ac  jal         func_200AB0
    ctx->pc = 0x201A9Cu;
    SET_GPR_U32(ctx, 31, 0x201AA4u);
    ctx->pc = 0x201AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201A9Cu;
    // 0x201aa0: 0x24843f20  addiu       $a0, $a0, 0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AB0u, 0x201A9Cu, 0x201AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201AA4u;
label_201aa4:
    // 0x201aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201aa8:
    // 0x201aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x201AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AA8u;
        // 0x201aac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201AB0u;
}
