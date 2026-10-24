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

// Function: ClearObjSlot_19DA48
// Address: 0x19da48 - 0x19daa8
void ClearObjSlot_19DA48_0x19da48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearObjSlot_19DA48_0x19da48");
#endif

    switch (ctx->pc) {
        case 0x19da84u: goto label_19da84;
        case 0x19da94u: goto label_19da94;
        default: break;
    }

    ctx->pc = 0x19da48u;

    // 0x19da48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19da48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19da4c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19da50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19da50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19da54: 0x24425fb0  addiu       $v0, $v0, 0x5FB0
    ctx->pc = 0x19da54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24496));
    // 0x19da58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19da58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19da5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19da5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19da60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19da64: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19da64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x19da68: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x19da68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x19da6c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19DA6Cu;
    {
        const bool branch_taken_0x19da6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA6Cu;
        // 0x19da70: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da6c) {
            ctx->pc = 0x19DA88u;
            goto label_19da88;
        }
    }
    ctx->pc = 0x19DA74u;
    // 0x19da74: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19da74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19da78: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19da78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da7c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19DA7Cu;
    SET_GPR_U32(ctx, 31, 0x19DA84u);
    ctx->pc = 0x19DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA7Cu;
    // 0x19da80: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19DA7Cu, 0x19DA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA84u;
label_19da84:
    // 0x19da84: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x19da84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_19da88:
    // 0x19da88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19da88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da8c: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x19DA8Cu;
    SET_GPR_U32(ctx, 31, 0x19DA94u);
    ctx->pc = 0x19DA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA8Cu;
    // 0x19da90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x19DA8Cu, 0x19DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA94u;
label_19da94:
    // 0x19da94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19da94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19da98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19da98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19da9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19da9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19daa0: 0x3e00008  jr          $ra
    ctx->pc = 0x19DAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DAA0u;
        // 0x19daa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DAA8u;
}
