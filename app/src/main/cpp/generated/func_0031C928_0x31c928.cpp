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

// Function: func_0031C928
// Address: 0x31c928 - 0x31c950
void func_0031C928_0x31c928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031C928_0x31c928");
#endif

    switch (ctx->pc) {
        case 0x31c944u: goto label_31c944;
        default: break;
    }

    ctx->pc = 0x31c928u;

    // 0x31c928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31c928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31c92c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31c92cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c934: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C934u;
    {
        const bool branch_taken_0x31c934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C934u;
        // 0x31c938: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c934) {
            ctx->pc = 0x31C944u;
            goto label_31c944;
        }
    }
    ctx->pc = 0x31C93Cu;
    // 0x31c93c: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x31C93Cu;
    SET_GPR_U32(ctx, 31, 0x31C944u);
    ctx->pc = 0x31C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C93Cu;
    // 0x31c940: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x31C93Cu, 0x31C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C944u;
label_31c944:
    // 0x31c944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c948: 0x3e00008  jr          $ra
    ctx->pc = 0x31C948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C948u;
        // 0x31c94c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C950u;
}
