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

// Function: cMessage_getRubyAddr
// Address: 0x2aeb00 - 0x2aeb50
void cMessage_getRubyAddr_0x2aeb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessage_getRubyAddr_0x2aeb00");
#endif

    ctx->pc = 0x2aeb00u;

    // 0x2aeb00: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2aeb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2aeb04: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x2aeb04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x2aeb08: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2AEB08u;
    {
        const bool branch_taken_0x2aeb08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB08u;
        // 0x2aeb0c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb08) {
            ctx->pc = 0x2AEB40u;
            goto label_2aeb40;
        }
    }
    ctx->pc = 0x2AEB10u;
    // 0x2aeb10: 0x51302  srl         $v0, $a1, 12
    ctx->pc = 0x2aeb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x2aeb14: 0x30a30fff  andi        $v1, $a1, 0xFFF
    ctx->pc = 0x2aeb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x2aeb18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2aeb18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2aeb1c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2aeb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2aeb20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2aeb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aeb24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aeb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aeb28: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2aeb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2aeb2c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2aeb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2aeb30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AEB30u;
    {
        const bool branch_taken_0x2aeb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB30u;
        // 0x2aeb34: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb30) {
            ctx->pc = 0x2AEB48u;
            goto label_2aeb48;
        }
    }
    ctx->pc = 0x2AEB38u;
    // 0x2aeb38: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB38u;
        // 0x2aeb3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEB40u;
label_2aeb40:
    // 0x2aeb40: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB40u;
        // 0x2aeb44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEB48u;
label_2aeb48:
    // 0x2aeb48: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEB50u;
}
