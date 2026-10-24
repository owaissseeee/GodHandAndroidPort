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

// Function: func_002C9B10
// Address: 0x2c9b10 - 0x2c9b78
void func_002C9B10_0x2c9b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C9B10_0x2c9b10");
#endif

    switch (ctx->pc) {
        case 0x2c9b44u: goto label_2c9b44;
        case 0x2c9b60u: goto label_2c9b60;
        default: break;
    }

    ctx->pc = 0x2c9b10u;

    // 0x2c9b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c9b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c9b14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c9b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c9b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c9b1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9b20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c9b24: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C9B24u;
    {
        const bool branch_taken_0x2c9b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B24u;
        // 0x2c9b28: 0x24820014  addiu       $v0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b24) {
            ctx->pc = 0x2C9B60u;
            goto label_2c9b60;
        }
    }
    ctx->pc = 0x2C9B2Cu;
    // 0x2c9b2c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2c9b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2c9b30: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x2c9b30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c9b34: 0x24719b70  addiu       $s1, $v1, -0x6490
    ctx->pc = 0x2c9b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x2c9b38: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x2c9b38u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c9b3c: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x2C9B3Cu;
    SET_GPR_U32(ctx, 31, 0x2C9B44u);
    ctx->pc = 0x2C9B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9B3Cu;
    // 0x2c9b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x2C9B3Cu, 0x2C9B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9B44u;
label_2c9b44:
    // 0x2c9b44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9b48: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9B48u;
    {
        const bool branch_taken_0x2c9b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c9b48) {
            ctx->pc = 0x2C9B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9B48u;
            // 0x2c9b4c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9B64u;
            goto label_2c9b64;
        }
    }
    ctx->pc = 0x2C9B50u;
    // 0x2c9b50: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x2c9b50u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c9b54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9b58: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x2C9B58u;
    SET_GPR_U32(ctx, 31, 0x2C9B60u);
    ctx->pc = 0x2C9B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9B58u;
    // 0x2c9b5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x2C9B58u, 0x2C9B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9B60u;
label_2c9b60:
    // 0x2c9b60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c9b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c9b64:
    // 0x2c9b64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B6Cu;
        // 0x2c9b70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9B74u;
    // 0x2c9b74: 0x0  nop
    ctx->pc = 0x2c9b74u;
    // NOP
    ctx->pc = 0x2c9b78u;
}
