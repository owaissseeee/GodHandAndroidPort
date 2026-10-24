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

// Function: MtxInitCoord
// Address: 0x147a48 - 0x147ab8
void MtxInitCoord_0x147a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MtxInitCoord_0x147a48");
#endif

    switch (ctx->pc) {
        case 0x147a74u: goto label_147a74;
        case 0x147a88u: goto label_147a88;
        case 0x147a98u: goto label_147a98;
        default: break;
    }

    ctx->pc = 0x147a48u;

    // 0x147a48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x147a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x147a4c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x147a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x147a50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x147a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a54: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x147a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x147a58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x147a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x147a5c: 0x311100ff  andi        $s1, $t0, 0xFF
    ctx->pc = 0x147a5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x147a60: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x147a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x147a64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x147a64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147a6c: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x147A6Cu;
    SET_GPR_U32(ctx, 31, 0x147A74u);
    ctx->pc = 0x147A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147A6Cu;
    // 0x147a70: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x147A6Cu, 0x147A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147A74u;
label_147a74:
    // 0x147a74: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x147a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a78: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x147a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a80: 0xc051ed8  jal         func_147B60
    ctx->pc = 0x147A80u;
    SET_GPR_U32(ctx, 31, 0x147A88u);
    ctx->pc = 0x147A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147A80u;
    // 0x147a84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B60u, 0x147A80u, 0x147A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147A88u;
label_147a88:
    // 0x147a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a8c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x147a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a90: 0xc051efe  jal         func_147BF8
    ctx->pc = 0x147A90u;
    SET_GPR_U32(ctx, 31, 0x147A98u);
    ctx->pc = 0x147A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147A90u;
    // 0x147a94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x147A90u, 0x147A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147A98u;
label_147a98:
    // 0x147a98: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x147a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147a9c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x147a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147aa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x147aa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147aa4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x147aa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147aac: 0x3e00008  jr          $ra
    ctx->pc = 0x147AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147AACu;
        // 0x147ab0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147AB4u;
    // 0x147ab4: 0x0  nop
    ctx->pc = 0x147ab4u;
    // NOP
    ctx->pc = 0x147ab8u;
}
