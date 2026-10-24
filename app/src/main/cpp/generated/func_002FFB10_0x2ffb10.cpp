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

// Function: func_002FFB10
// Address: 0x2ffb10 - 0x2ffb38
void func_002FFB10_0x2ffb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FFB10_0x2ffb10");
#endif

    switch (ctx->pc) {
        case 0x2ffb28u: goto label_2ffb28;
        default: break;
    }

    ctx->pc = 0x2ffb10u;

    // 0x2ffb10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ffb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ffb14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ffb14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffb18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFB18u;
    {
        const bool branch_taken_0x2ffb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB18u;
        // 0x2ffb1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb18) {
            ctx->pc = 0x2FFB28u;
            goto label_2ffb28;
        }
    }
    ctx->pc = 0x2FFB20u;
    // 0x2ffb20: 0xc0b8d20  jal         func_2E3480
    ctx->pc = 0x2FFB20u;
    SET_GPR_U32(ctx, 31, 0x2FFB28u);
    ctx->pc = 0x2E3480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3480u, 0x2FFB20u, 0x2FFB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFB28u;
label_2ffb28:
    // 0x2ffb28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB2Cu;
        // 0x2ffb30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFB34u;
    // 0x2ffb34: 0x0  nop
    ctx->pc = 0x2ffb34u;
    // NOP
    ctx->pc = 0x2ffb38u;
}
