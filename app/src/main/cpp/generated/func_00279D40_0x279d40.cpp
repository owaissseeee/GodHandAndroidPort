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

// Function: func_00279D40
// Address: 0x279d40 - 0x279d88
void func_00279D40_0x279d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00279D40_0x279d40");
#endif

    switch (ctx->pc) {
        case 0x279d68u: goto label_279d68;
        case 0x279d74u: goto label_279d74;
        default: break;
    }

    ctx->pc = 0x279d40u;

    // 0x279d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279d44: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x279d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x279d48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x279d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x279d4c: 0x24427e68  addiu       $v0, $v0, 0x7E68
    ctx->pc = 0x279d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32360));
    // 0x279d50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x279d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x279d54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x279d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279d5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x279d5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d60: 0xc09e79c  jal         func_279E70
    ctx->pc = 0x279D60u;
    SET_GPR_U32(ctx, 31, 0x279D68u);
    ctx->pc = 0x279D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279D60u;
    // 0x279d64: 0xae020214  sw          $v0, 0x214($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E70u, 0x279D60u, 0x279D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279D68u;
label_279d68:
    // 0x279d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d6c: 0xc0a3ae2  jal         func_28EB88
    ctx->pc = 0x279D6Cu;
    SET_GPR_U32(ctx, 31, 0x279D74u);
    ctx->pc = 0x279D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279D6Cu;
    // 0x279d70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB88u, 0x279D6Cu, 0x279D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279D74u;
label_279d74:
    // 0x279d74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x279d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279d78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279d80: 0x3e00008  jr          $ra
    ctx->pc = 0x279D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D80u;
        // 0x279d84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279D88u;
}
