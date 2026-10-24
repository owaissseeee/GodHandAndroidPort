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

// Function: func_00327830
// Address: 0x327830 - 0x327860
void func_00327830_0x327830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327830_0x327830");
#endif

    ctx->pc = 0x327830u;

    // 0x327830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327834: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327838: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x327838u;
    {
        const bool branch_taken_0x327838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327838u;
        // 0x32783c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327838) {
            ctx->pc = 0x327850u;
            goto label_327850;
        }
    }
    ctx->pc = 0x327840u;
    // 0x327840: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x327840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x327844: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327848: 0x80cf3dc  j           func_33CF70
    ctx->pc = 0x327848u;
    ctx->pc = 0x32784Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327848u;
    // 0x32784c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CF70u, 0x327848u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x327850u;
label_327850:
    // 0x327850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327854: 0x3e00008  jr          $ra
    ctx->pc = 0x327854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327854u;
        // 0x327858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32785Cu;
    // 0x32785c: 0x0  nop
    ctx->pc = 0x32785cu;
    // NOP
    ctx->pc = 0x327860u;
}
