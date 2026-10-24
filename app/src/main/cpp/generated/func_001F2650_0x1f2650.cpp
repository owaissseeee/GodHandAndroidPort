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

// Function: func_001F2650
// Address: 0x1f2650 - 0x1f2690
void func_001F2650_0x1f2650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F2650_0x1f2650");
#endif

    switch (ctx->pc) {
        case 0x1f2674u: goto label_1f2674;
        default: break;
    }

    ctx->pc = 0x1f2650u;

    // 0x1f2650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f2650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f2654: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f2654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f2658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f265c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f265cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2660: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f2660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f2664: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2664u;
    {
        const bool branch_taken_0x1f2664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2664) {
            ctx->pc = 0x1F2668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2664u;
            // 0x1f2668: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2684u;
            goto label_1f2684;
        }
    }
    ctx->pc = 0x1F266Cu;
    // 0x1f266c: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F266Cu;
    SET_GPR_U32(ctx, 31, 0x1F2674u);
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F266Cu, 0x1F2674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2674u;
label_1f2674:
    // 0x1f2674: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f2674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f2678: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f2678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f267c: 0xae020b94  sw          $v0, 0xB94($s0)
    ctx->pc = 0x1f267cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
    // 0x1f2680: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f2680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f2684:
    // 0x1f2684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2688: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2688u;
        // 0x1f268c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2690u;
}
