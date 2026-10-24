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

// Function: MtxMulRotVec
// Address: 0x147b60 - 0x147bb0
void MtxMulRotVec_0x147b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MtxMulRotVec_0x147b60");
#endif

    switch (ctx->pc) {
        case 0x147b88u: goto label_147b88;
        case 0x147b98u: goto label_147b98;
        default: break;
    }

    ctx->pc = 0x147b60u;

    // 0x147b60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x147b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x147b64: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x147b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x147b68: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x147b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x147b6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x147b6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x147b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b74: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x147b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x147b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x147b7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x147b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b80: 0xc051dca  jal         func_147728
    ctx->pc = 0x147B80u;
    SET_GPR_U32(ctx, 31, 0x147B88u);
    ctx->pc = 0x147B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B80u;
    // 0x147b84: 0x30e600ff  andi        $a2, $a3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x147B80u, 0x147B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147B88u;
label_147b88:
    // 0x147b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x147b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b90: 0xc051d52  jal         func_147548
    ctx->pc = 0x147B90u;
    SET_GPR_U32(ctx, 31, 0x147B98u);
    ctx->pc = 0x147B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147B90u;
    // 0x147b94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x147B90u, 0x147B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147B98u;
label_147b98:
    // 0x147b98: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x147b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x147b9c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x147b9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x147ba0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x147ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x147BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147BA4u;
        // 0x147ba8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147BACu;
    // 0x147bac: 0x0  nop
    ctx->pc = 0x147bacu;
    // NOP
    ctx->pc = 0x147bb0u;
}
