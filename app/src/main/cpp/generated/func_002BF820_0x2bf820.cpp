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

// Function: func_002BF820
// Address: 0x2bf820 - 0x2bf858
void func_002BF820_0x2bf820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BF820_0x2bf820");
#endif

    switch (ctx->pc) {
        case 0x2bf848u: goto label_2bf848;
        default: break;
    }

    ctx->pc = 0x2bf820u;

    // 0x2bf820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf824: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2bf824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2bf828: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF828u;
    {
        const bool branch_taken_0x2bf828 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF828u;
        // 0x2bf82c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf828) {
            ctx->pc = 0x2BF848u;
            goto label_2bf848;
        }
    }
    ctx->pc = 0x2BF830u;
    // 0x2bf830: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BF830u;
    {
        const bool branch_taken_0x2bf830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF830u;
        // 0x2bf834: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf830) {
            ctx->pc = 0x2BF84Cu;
            goto label_2bf84c;
        }
    }
    ctx->pc = 0x2BF838u;
    // 0x2bf838: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x2bf838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x2bf83c: 0x248438f0  addiu       $a0, $a0, 0x38F0
    ctx->pc = 0x2bf83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14576));
    // 0x2bf840: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x2BF840u;
    SET_GPR_U32(ctx, 31, 0x2BF848u);
    ctx->pc = 0x2BF844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF840u;
    // 0x2bf844: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x2BF840u, 0x2BF848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF848u;
label_2bf848:
    // 0x2bf848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf84c:
    // 0x2bf84c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF84Cu;
        // 0x2bf850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF854u;
    // 0x2bf854: 0x0  nop
    ctx->pc = 0x2bf854u;
    // NOP
    ctx->pc = 0x2bf858u;
}
