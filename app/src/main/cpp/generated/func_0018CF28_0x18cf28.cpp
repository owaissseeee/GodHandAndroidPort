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

// Function: func_0018CF28
// Address: 0x18cf28 - 0x18cf88
void func_0018CF28_0x18cf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018CF28_0x18cf28");
#endif

    switch (ctx->pc) {
        case 0x18cf64u: goto label_18cf64;
        case 0x18cf74u: goto label_18cf74;
        default: break;
    }

    ctx->pc = 0x18cf28u;

    // 0x18cf28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18cf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18cf2c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18cf30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18cf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18cf34: 0x244239c8  addiu       $v0, $v0, 0x39C8
    ctx->pc = 0x18cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14792));
    // 0x18cf38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18cf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18cf3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18cf3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18cf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18cf44: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x18cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x18cf48: 0x8e030650  lw          $v1, 0x650($s0)
    ctx->pc = 0x18cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x18cf4c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18CF4Cu;
    {
        const bool branch_taken_0x18cf4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF4Cu;
        // 0x18cf50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf4c) {
            ctx->pc = 0x18CF68u;
            goto label_18cf68;
        }
    }
    ctx->pc = 0x18CF54u;
    // 0x18cf54: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x18cf54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x18cf58: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x18cf58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf5c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x18CF5Cu;
    SET_GPR_U32(ctx, 31, 0x18CF64u);
    ctx->pc = 0x18CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF5Cu;
    // 0x18cf60: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x18CF5Cu, 0x18CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CF64u;
label_18cf64:
    // 0x18cf64: 0xae000650  sw          $zero, 0x650($s0)
    ctx->pc = 0x18cf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 0));
label_18cf68:
    // 0x18cf68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf6c: 0xc071f78  jal         func_1C7DE0
    ctx->pc = 0x18CF6Cu;
    SET_GPR_U32(ctx, 31, 0x18CF74u);
    ctx->pc = 0x18CF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF6Cu;
    // 0x18cf70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7DE0u, 0x18CF6Cu, 0x18CF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CF74u;
label_18cf74:
    // 0x18cf74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18cf74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cf78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18cf78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cf7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18cf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cf80: 0x3e00008  jr          $ra
    ctx->pc = 0x18CF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF80u;
        // 0x18cf84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CF88u;
}
