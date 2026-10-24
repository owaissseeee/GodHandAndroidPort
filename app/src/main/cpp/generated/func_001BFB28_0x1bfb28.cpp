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

// Function: func_001BFB28
// Address: 0x1bfb28 - 0x1bfb80
void func_001BFB28_0x1bfb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BFB28_0x1bfb28");
#endif

    switch (ctx->pc) {
        case 0x1bfb40u: goto label_1bfb40;
        default: break;
    }

    ctx->pc = 0x1bfb28u;

    // 0x1bfb28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bfb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bfb2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bfb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bfb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bfb34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bfb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bfb38: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x1BFB38u;
    SET_GPR_U32(ctx, 31, 0x1BFB40u);
    ctx->pc = 0x1BFB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB38u;
    // 0x1bfb3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x1BFB38u, 0x1BFB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB40u;
label_1bfb40:
    // 0x1bfb40: 0x8c440380  lw          $a0, 0x380($v0)
    ctx->pc = 0x1bfb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1bfb44: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1bfb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1bfb48: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x1bfb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1bfb4c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1bfb4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bfb50: 0xac440380  sw          $a0, 0x380($v0)
    ctx->pc = 0x1bfb50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 4));
    // 0x1bfb54: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1bfb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1bfb58: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFB58u;
    {
        const bool branch_taken_0x1bfb58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB58u;
        // 0x1bfb5c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb58) {
            ctx->pc = 0x1BFB6Cu;
            goto label_1bfb6c;
        }
    }
    ctx->pc = 0x1BFB60u;
    // 0x1bfb60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bfb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bfb64: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1bfb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1bfb68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1bfb68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1bfb6c:
    // 0x1bfb6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bfb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bfb70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bfb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfb74: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB74u;
        // 0x1bfb78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFB7Cu;
    // 0x1bfb7c: 0x0  nop
    ctx->pc = 0x1bfb7cu;
    // NOP
    ctx->pc = 0x1bfb80u;
}
