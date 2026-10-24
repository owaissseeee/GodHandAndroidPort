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

// Function: ForwardTransBySubState_146E20
// Address: 0x146e20 - 0x146e70
void ForwardTransBySubState_146E20_0x146e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardTransBySubState_146E20_0x146e20");
#endif

    switch (ctx->pc) {
        case 0x146e50u: goto label_146e50;
        case 0x146e60u: goto label_146e60;
        default: break;
    }

    ctx->pc = 0x146e20u;

    // 0x146e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x146e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x146e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146e28: 0x80830079  lb          $v1, 0x79($a0)
    ctx->pc = 0x146e28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 121)));
    // 0x146e2c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x146E2Cu;
    {
        const bool branch_taken_0x146e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E2Cu;
        // 0x146e30: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e2c) {
            ctx->pc = 0x146E60u;
            goto label_146e60;
        }
    }
    ctx->pc = 0x146E34u;
    // 0x146e34: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x146E34u;
    {
        const bool branch_taken_0x146e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x146E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E34u;
        // 0x146e38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e34) {
            ctx->pc = 0x146E64u;
            goto label_146e64;
        }
    }
    ctx->pc = 0x146E3Cu;
    // 0x146e3c: 0x948200f8  lhu         $v0, 0xF8($a0)
    ctx->pc = 0x146e3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x146e40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x146E40u;
    {
        const bool branch_taken_0x146e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146e40) {
            ctx->pc = 0x146E58u;
            goto label_146e58;
        }
    }
    ctx->pc = 0x146E48u;
    // 0x146e48: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x146E48u;
    SET_GPR_U32(ctx, 31, 0x146E50u);
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x146E48u, 0x146E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E50u;
label_146e50:
    // 0x146e50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x146E50u;
    {
        const bool branch_taken_0x146e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E50u;
        // 0x146e54: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e50) {
            ctx->pc = 0x146E64u;
            goto label_146e64;
        }
    }
    ctx->pc = 0x146E58u;
label_146e58:
    // 0x146e58: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x146E58u;
    SET_GPR_U32(ctx, 31, 0x146E60u);
    ctx->pc = 0x146E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146E58u;
    // 0x146e5c: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x146E58u, 0x146E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E60u;
label_146e60:
    // 0x146e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_146e64:
    // 0x146e64: 0x3e00008  jr          $ra
    ctx->pc = 0x146E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E64u;
        // 0x146e68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146E6Cu;
    // 0x146e6c: 0x0  nop
    ctx->pc = 0x146e6cu;
    // NOP
    ctx->pc = 0x146e70u;
}
