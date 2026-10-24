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

// Function: ResetField214FreeField600B_192A38
// Address: 0x192a38 - 0x192a98
void ResetField214FreeField600B_192A38_0x192a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetField214FreeField600B_192A38_0x192a38");
#endif

    switch (ctx->pc) {
        case 0x192a74u: goto label_192a74;
        case 0x192a84u: goto label_192a84;
        default: break;
    }

    ctx->pc = 0x192a38u;

    // 0x192a38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x192a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x192a3c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x192a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x192a40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x192a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x192a44: 0x244243f0  addiu       $v0, $v0, 0x43F0
    ctx->pc = 0x192a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17392));
    // 0x192a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x192a4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192a54: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x192a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x192a58: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x192a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x192a5c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x192A5Cu;
    {
        const bool branch_taken_0x192a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A5Cu;
        // 0x192a60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a5c) {
            ctx->pc = 0x192A78u;
            goto label_192a78;
        }
    }
    ctx->pc = 0x192A64u;
    // 0x192a64: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x192a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x192a68: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x192a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a6c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x192A6Cu;
    SET_GPR_U32(ctx, 31, 0x192A74u);
    ctx->pc = 0x192A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A6Cu;
    // 0x192a70: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x192A6Cu, 0x192A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A74u;
label_192a74:
    // 0x192a74: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x192a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_192a78:
    // 0x192a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a7c: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x192A7Cu;
    SET_GPR_U32(ctx, 31, 0x192A84u);
    ctx->pc = 0x192A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A7Cu;
    // 0x192a80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x192A7Cu, 0x192A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A84u;
label_192a84:
    // 0x192a84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x192a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192a88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192a90: 0x3e00008  jr          $ra
    ctx->pc = 0x192A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A90u;
        // 0x192a94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192A98u;
}
