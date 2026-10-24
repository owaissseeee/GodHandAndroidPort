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

// Function: InitActorVU0Slots0A0CB_170C20
// Address: 0x170c20 - 0x170c98
void InitActorVU0Slots0A0CB_170C20_0x170c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitActorVU0Slots0A0CB_170C20_0x170c20");
#endif

    switch (ctx->pc) {
        case 0x170c60u: goto label_170c60;
        case 0x170c84u: goto label_170c84;
        default: break;
    }

    ctx->pc = 0x170c20u;

    // 0x170c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x170c24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x170c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170c28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x170c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x170c2c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x170c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x170c30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x170c34: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x170c34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x170c38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x170c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c3c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x170c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x170c40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c48: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x170c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170c4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170c50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x170c54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c58: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x170C58u;
    SET_GPR_U32(ctx, 31, 0x170C60u);
    ctx->pc = 0x170C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C58u;
    // 0x170c5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x170C58u, 0x170C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C60u;
label_170c60:
    // 0x170c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c64: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x170c64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x170c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170c6c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x170c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x170c70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170c70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170c74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x170c78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c7c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x170C7Cu;
    SET_GPR_U32(ctx, 31, 0x170C84u);
    ctx->pc = 0x170C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170C7Cu;
    // 0x170c80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x170C7Cu, 0x170C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C84u;
label_170c84:
    // 0x170c84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x170c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170c88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170c90: 0x3e00008  jr          $ra
    ctx->pc = 0x170C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C90u;
        // 0x170c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170C98u;
}
