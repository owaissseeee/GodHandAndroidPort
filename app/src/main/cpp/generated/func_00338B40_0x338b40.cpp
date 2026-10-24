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

// Function: func_00338B40
// Address: 0x338b40 - 0x338b90
void func_00338B40_0x338b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338B40_0x338b40");
#endif

    ctx->pc = 0x338b40u;

    // 0x338b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338b44: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x338b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x338b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x338b4c: 0x24633ac8  addiu       $v1, $v1, 0x3AC8
    ctx->pc = 0x338b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15048));
    // 0x338b50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x338b50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E3AC8u));
    // 0x338b54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x338b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x338b58: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x338B58u;
    {
        const bool branch_taken_0x338b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x338B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B58u;
        // 0x338b5c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338b58) {
            ctx->pc = 0x338B80u;
            goto label_338b80;
        }
    }
    ctx->pc = 0x338B60u;
    // 0x338b60: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x338b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x338b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338b68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x338b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338b6c: 0x24843ad0  addiu       $a0, $a0, 0x3AD0
    ctx->pc = 0x338b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15056));
    // 0x338b70: 0x24060480  addiu       $a2, $zero, 0x480
    ctx->pc = 0x338b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x338b74: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x338B74u;
    ctx->pc = 0x338B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338B74u;
    // 0x338b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x338B74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x338B7Cu;
    // 0x338b7c: 0x0  nop
    ctx->pc = 0x338b7cu;
    // NOP
label_338b80:
    // 0x338b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338b84: 0x3e00008  jr          $ra
    ctx->pc = 0x338B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B84u;
        // 0x338b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338B8Cu;
    // 0x338b8c: 0x0  nop
    ctx->pc = 0x338b8cu;
    // NOP
    ctx->pc = 0x338b90u;
}
