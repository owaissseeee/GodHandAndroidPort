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

// Function: func_001F6A20
// Address: 0x1f6a20 - 0x1f6a80
void func_001F6A20_0x1f6a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F6A20_0x1f6a20");
#endif

    switch (ctx->pc) {
        case 0x1f6a40u: goto label_1f6a40;
        case 0x1f6a60u: goto label_1f6a60;
        default: break;
    }

    ctx->pc = 0x1f6a20u;

    // 0x1f6a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6a24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f6a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6a28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6a2c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1f6a2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1f6a30: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6A30u;
    {
        const bool branch_taken_0x1f6a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F6A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A30u;
        // 0x1f6a34: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a30) {
            ctx->pc = 0x1F6A58u;
            goto label_1f6a58;
        }
    }
    ctx->pc = 0x1F6A38u;
    // 0x1f6a38: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F6A38u;
    SET_GPR_U32(ctx, 31, 0x1F6A40u);
    ctx->pc = 0x1F6A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A38u;
    // 0x1f6a3c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F6A38u, 0x1F6A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A40u;
label_1f6a40:
    // 0x1f6a40: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x1f6a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f6a44: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1f6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1f6a48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f6a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f6a4c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1f6a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f6a50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6A50u;
    {
        const bool branch_taken_0x1f6a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A50u;
        // 0x1f6a54: 0xac44002c  sw          $a0, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a50) {
            ctx->pc = 0x1F6A70u;
            goto label_1f6a70;
        }
    }
    ctx->pc = 0x1F6A58u;
label_1f6a58:
    // 0x1f6a58: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1F6A58u;
    SET_GPR_U32(ctx, 31, 0x1F6A60u);
    ctx->pc = 0x1F6A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A58u;
    // 0x1f6a5c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1F6A58u, 0x1F6A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A60u;
label_1f6a60:
    // 0x1f6a60: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1f6a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1f6a64: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1f6a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1f6a68: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1f6a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1f6a6c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1f6a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_1f6a70:
    // 0x1f6a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6a74: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A74u;
        // 0x1f6a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6A7Cu;
    // 0x1f6a7c: 0x0  nop
    ctx->pc = 0x1f6a7cu;
    // NOP
    ctx->pc = 0x1f6a80u;
}
