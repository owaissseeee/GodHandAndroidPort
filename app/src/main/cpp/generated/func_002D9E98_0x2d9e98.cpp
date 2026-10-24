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

// Function: func_002D9E98
// Address: 0x2d9e98 - 0x2d9ec8
void func_002D9E98_0x2d9e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D9E98_0x2d9e98");
#endif

    switch (ctx->pc) {
        case 0x2d9ebcu: goto label_2d9ebc;
        default: break;
    }

    ctx->pc = 0x2d9e98u;

    // 0x2d9e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9e9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2d9e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d9ea0: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D9EA0u;
    {
        const bool branch_taken_0x2d9ea0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D9EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9EA0u;
        // 0x2d9ea4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ea0) {
            ctx->pc = 0x2D9EBCu;
            goto label_2d9ebc;
        }
    }
    ctx->pc = 0x2D9EA8u;
    // 0x2d9ea8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9EA8u;
    {
        const bool branch_taken_0x2d9ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9EA8u;
        // 0x2d9eac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ea8) {
            ctx->pc = 0x2D9EC0u;
            goto label_2d9ec0;
        }
    }
    ctx->pc = 0x2D9EB0u;
    // 0x2d9eb0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2d9eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2d9eb4: 0xc0b6786  jal         func_2D9E18
    ctx->pc = 0x2D9EB4u;
    SET_GPR_U32(ctx, 31, 0x2D9EBCu);
    ctx->pc = 0x2D9EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9EB4u;
    // 0x2d9eb8: 0x2484a998  addiu       $a0, $a0, -0x5668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9E18u, 0x2D9EB4u, 0x2D9EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9EBCu;
label_2d9ebc:
    // 0x2d9ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9ec0:
    // 0x2d9ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9EC0u;
        // 0x2d9ec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9EC8u;
}
