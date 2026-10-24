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

// Function: func_002D9B70
// Address: 0x2d9b70 - 0x2d9ba0
void func_002D9B70_0x2d9b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D9B70_0x2d9b70");
#endif

    switch (ctx->pc) {
        case 0x2d9b94u: goto label_2d9b94;
        default: break;
    }

    ctx->pc = 0x2d9b70u;

    // 0x2d9b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9b74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2d9b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d9b78: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D9B78u;
    {
        const bool branch_taken_0x2d9b78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B78u;
        // 0x2d9b7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b78) {
            ctx->pc = 0x2D9B94u;
            goto label_2d9b94;
        }
    }
    ctx->pc = 0x2D9B80u;
    // 0x2d9b80: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9B80u;
    {
        const bool branch_taken_0x2d9b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B80u;
        // 0x2d9b84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b80) {
            ctx->pc = 0x2D9B98u;
            goto label_2d9b98;
        }
    }
    ctx->pc = 0x2D9B88u;
    // 0x2d9b88: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2d9b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2d9b8c: 0xc0b5b60  jal         func_2D6D80
    ctx->pc = 0x2D9B8Cu;
    SET_GPR_U32(ctx, 31, 0x2D9B94u);
    ctx->pc = 0x2D9B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B8Cu;
    // 0x2d9b90: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6D80u, 0x2D9B8Cu, 0x2D9B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B94u;
label_2d9b94:
    // 0x2d9b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9b98:
    // 0x2d9b98: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B98u;
        // 0x2d9b9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9BA0u;
}
