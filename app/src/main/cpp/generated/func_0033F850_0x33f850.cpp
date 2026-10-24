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

// Function: func_0033F850
// Address: 0x33f850 - 0x33f888
void func_0033F850_0x33f850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033F850_0x33f850");
#endif

    switch (ctx->pc) {
        case 0x33f868u: goto label_33f868;
        default: break;
    }

    ctx->pc = 0x33f850u;

    // 0x33f850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f854: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33f854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33f858: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33F858u;
    {
        const bool branch_taken_0x33f858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x33F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F858u;
        // 0x33f85c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f858) {
            ctx->pc = 0x33F878u;
            goto label_33f878;
        }
    }
    ctx->pc = 0x33F860u;
    // 0x33f860: 0xc0c9588  jal         func_325620
    ctx->pc = 0x33F860u;
    SET_GPR_U32(ctx, 31, 0x33F868u);
    ctx->pc = 0x325620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325620u, 0x33F860u, 0x33F868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F868u;
label_33f868:
    // 0x33f868: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33f868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f86c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x33f86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x33f870: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33f870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33f874: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x33f874u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_33f878:
    // 0x33f878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f87c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x33f87cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f880: 0x3e00008  jr          $ra
    ctx->pc = 0x33F880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F880u;
        // 0x33f884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F888u;
}
