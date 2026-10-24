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

// Function: func_003BA088
// Address: 0x3ba088 - 0x3ba0c8
void func_003BA088_0x3ba088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BA088_0x3ba088");
#endif

    ctx->pc = 0x3ba088u;

    // 0x3ba088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ba088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ba08c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BA08Cu;
    {
        const bool branch_taken_0x3ba08c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA08Cu;
        // 0x3ba090: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba08c) {
            ctx->pc = 0x3BA0A8u;
            goto label_3ba0a8;
        }
    }
    ctx->pc = 0x3BA094u;
    // 0x3ba094: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3ba094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3ba098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ba098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba09c: 0x24840928  addiu       $a0, $a0, 0x928
    ctx->pc = 0x3ba09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    // 0x3ba0a0: 0x80ee778  j           func_3B9DE0
    ctx->pc = 0x3BA0A0u;
    ctx->pc = 0x3BA0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA0A0u;
    // 0x3ba0a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DE0u, 0x3BA0A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BA0A8u;
label_3ba0a8:
    // 0x3ba0a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ba0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba0ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ba0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ba0b0: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x3ba0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x3ba0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA0B4u;
        // 0x3ba0b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA0BCu;
    // 0x3ba0bc: 0x0  nop
    ctx->pc = 0x3ba0bcu;
    // NOP
    // 0x3ba0c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ba0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ba0c4: 0x0  nop
    ctx->pc = 0x3ba0c4u;
    // NOP
    ctx->pc = 0x3ba0c8u;
}
