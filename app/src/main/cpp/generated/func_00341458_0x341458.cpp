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

// Function: func_00341458
// Address: 0x341458 - 0x341480
void func_00341458_0x341458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00341458_0x341458");
#endif

    ctx->pc = 0x341458u;

    // 0x341458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34145c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34145cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x341464: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x341464u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x341468: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x341468u;
    {
        const bool branch_taken_0x341468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x34146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341468u;
        // 0x34146c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341468) {
            ctx->pc = 0x341478u;
            goto label_341478;
        }
    }
    ctx->pc = 0x341470u;
    // 0x341470: 0x80d04b6  j           func_3412D8
    ctx->pc = 0x341470u;
    ctx->pc = 0x341474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341470u;
    // 0x341474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3412D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3412D8u, 0x341470u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x341478u;
label_341478:
    // 0x341478: 0x80d0448  j           func_341120
    ctx->pc = 0x341478u;
    ctx->pc = 0x34147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341478u;
    // 0x34147c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341120u, 0x341478u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x341480u;
}
