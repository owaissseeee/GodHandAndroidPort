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

// Function: func_003B9E60
// Address: 0x3b9e60 - 0x3b9eb0
void func_003B9E60_0x3b9e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B9E60_0x3b9e60");
#endif

    switch (ctx->pc) {
        case 0x3b9e94u: goto label_3b9e94;
        default: break;
    }

    ctx->pc = 0x3b9e60u;

    // 0x3b9e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b9e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b9e64: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b9e68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b9e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b9e6c: 0x2450c7a8  addiu       $s0, $v0, -0x3858
    ctx->pc = 0x3b9e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952872));
    // 0x3b9e70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3b9e70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FC7A8u));
    // 0x3b9e74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b9e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b9e78: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B9E78u;
    {
        const bool branch_taken_0x3b9e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9E78u;
        // 0x3b9e7c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9e78) {
            ctx->pc = 0x3B9E98u;
            goto label_3b9e98;
        }
    }
    ctx->pc = 0x3B9E80u;
    // 0x3b9e80: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3b9e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3b9e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b9e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9e88: 0x2484c7b8  addiu       $a0, $a0, -0x3848
    ctx->pc = 0x3b9e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952888));
    // 0x3b9e8c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3B9E8Cu;
    SET_GPR_U32(ctx, 31, 0x3B9E94u);
    ctx->pc = 0x3B9E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9E8Cu;
    // 0x3b9e90: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3B9E8Cu, 0x3B9E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9E94u;
label_3b9e94:
    // 0x3b9e94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3b9e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b9e98:
    // 0x3b9e98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b9e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b9e9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3b9e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b9ea0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b9ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3b9ea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b9ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9EA8u;
        // 0x3b9eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9EB0u;
}
