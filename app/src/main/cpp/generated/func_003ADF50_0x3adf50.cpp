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

// Function: func_003ADF50
// Address: 0x3adf50 - 0x3adfa8
void func_003ADF50_0x3adf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003ADF50_0x3adf50");
#endif

    switch (ctx->pc) {
        case 0x3adf74u: goto label_3adf74;
        default: break;
    }

    ctx->pc = 0x3adf50u;

    // 0x3adf50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3adf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3adf54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3adf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3adf58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3adf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3adf5c: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x3adf5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
    // 0x3adf60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3adf60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adf64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3adf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3adf68: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3adf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adf6c: 0xc0ec0e2  jal         func_3B0388
    ctx->pc = 0x3ADF6Cu;
    SET_GPR_U32(ctx, 31, 0x3ADF74u);
    ctx->pc = 0x3ADF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADF6Cu;
    // 0x3adf70: 0xae00db88  sw          $zero, -0x2478($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294957960), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0388u, 0x3ADF6Cu, 0x3ADF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADF74u;
label_3adf74:
    // 0x3adf74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3adf74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adf78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3adf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3adf7c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3ADF7Cu;
    {
        const bool branch_taken_0x3adf7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3adf7c) {
            ctx->pc = 0x3ADF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADF7Cu;
            // 0x3adf80: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADF94u;
            goto label_3adf94;
        }
    }
    ctx->pc = 0x3ADF84u;
    // 0x3adf84: 0x8e02db88  lw          $v0, -0x2478($s0)
    ctx->pc = 0x3adf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294957960)));
    // 0x3adf88: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3ADF88u;
    {
        const bool branch_taken_0x3adf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3adf88) {
            ctx->pc = 0x3ADF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADF88u;
            // 0x3adf8c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADF90u;
            goto label_3adf90;
        }
    }
    ctx->pc = 0x3ADF90u;
label_3adf90:
    // 0x3adf90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3adf90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3adf94:
    // 0x3adf94: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3adf94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adf98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3adf98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3adf9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3adf9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3adfa0: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFA0u;
        // 0x3adfa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADFA8u;
}
