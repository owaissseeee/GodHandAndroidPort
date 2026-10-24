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

// Function: ResetActorState_1BBF00
// Address: 0x1bbf00 - 0x1bbf68
void ResetActorState_1BBF00_0x1bbf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetActorState_1BBF00_0x1bbf00");
#endif

    switch (ctx->pc) {
        case 0x1bbf3cu: goto label_1bbf3c;
        case 0x1bbf48u: goto label_1bbf48;
        case 0x1bbf54u: goto label_1bbf54;
        default: break;
    }

    ctx->pc = 0x1bbf00u;

    // 0x1bbf00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bbf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bbf04: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1bbf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1bbf08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bbf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bbf0c: 0x244292f0  addiu       $v0, $v0, -0x6D10
    ctx->pc = 0x1bbf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939376));
    // 0x1bbf10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bbf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bbf14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bbf14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbf1c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1bbf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1bbf20: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1bbf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1bbf24: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBF24u;
    {
        const bool branch_taken_0x1bbf24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF24u;
        // 0x1bbf28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf24) {
            ctx->pc = 0x1BBF40u;
            goto label_1bbf40;
        }
    }
    ctx->pc = 0x1BBF2Cu;
    // 0x1bbf2c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1bbf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1bbf30: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1bbf30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf34: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1BBF34u;
    SET_GPR_U32(ctx, 31, 0x1BBF3Cu);
    ctx->pc = 0x1BBF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF34u;
    // 0x1bbf38: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1BBF34u, 0x1BBF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF3Cu;
label_1bbf3c:
    // 0x1bbf3c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1bbf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_1bbf40:
    // 0x1bbf40: 0xc06f4fc  jal         func_1BD3F0
    ctx->pc = 0x1BBF40u;
    SET_GPR_U32(ctx, 31, 0x1BBF48u);
    ctx->pc = 0x1BBF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF40u;
    // 0x1bbf44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD3F0u, 0x1BBF40u, 0x1BBF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF48u;
label_1bbf48:
    // 0x1bbf48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf4c: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1BBF4Cu;
    SET_GPR_U32(ctx, 31, 0x1BBF54u);
    ctx->pc = 0x1BBF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF4Cu;
    // 0x1bbf50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1BBF4Cu, 0x1BBF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF54u;
label_1bbf54:
    // 0x1bbf54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bbf54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbf58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bbf58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbf5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbf60: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF60u;
        // 0x1bbf64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBF68u;
}
