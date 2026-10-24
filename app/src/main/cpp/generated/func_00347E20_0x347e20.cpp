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

// Function: func_00347E20
// Address: 0x347e20 - 0x347e58
void func_00347E20_0x347e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347E20_0x347e20");
#endif

    ctx->pc = 0x347e20u;

    // 0x347e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x347e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x347e28: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x347e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x347e2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x347E2Cu;
    {
        const bool branch_taken_0x347e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E2Cu;
        // 0x347e30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347e2c) {
            ctx->pc = 0x347E40u;
            goto label_347e40;
        }
    }
    ctx->pc = 0x347E34u;
    // 0x347e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x347e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347e38: 0x80cd6e2  j           func_335B88
    ctx->pc = 0x347E38u;
    ctx->pc = 0x347E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347E38u;
    // 0x347e3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335B88u, 0x347E38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x347E40u;
label_347e40:
    // 0x347e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x347e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347e44: 0x3e00008  jr          $ra
    ctx->pc = 0x347E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347E44u;
        // 0x347e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347E4Cu;
    // 0x347e4c: 0x0  nop
    ctx->pc = 0x347e4cu;
    // NOP
    // 0x347e50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x347e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x347e54: 0x0  nop
    ctx->pc = 0x347e54u;
    // NOP
    ctx->pc = 0x347e58u;
}
