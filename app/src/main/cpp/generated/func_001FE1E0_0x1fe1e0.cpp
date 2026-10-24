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

// Function: func_001FE1E0
// Address: 0x1fe1e0 - 0x1fe218
void func_001FE1E0_0x1fe1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FE1E0_0x1fe1e0");
#endif

    switch (ctx->pc) {
        case 0x1fe1f0u: goto label_1fe1f0;
        default: break;
    }

    ctx->pc = 0x1fe1e0u;

    // 0x1fe1e0: 0x24853c00  addiu       $a1, $a0, 0x3C00
    ctx->pc = 0x1fe1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 15360));
    // 0x1fe1e4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1fe1e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1e8: 0x9062004a  lbu         $v0, 0x4A($v1)
    ctx->pc = 0x1fe1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 74)));
    // 0x1fe1ec: 0x0  nop
    ctx->pc = 0x1fe1ecu;
    // NOP
label_1fe1f0:
    // 0x1fe1f0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE1F0u;
    {
        const bool branch_taken_0x1fe1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe1f0) {
            ctx->pc = 0x1FE1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE1F0u;
            // 0x1fe1f4: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE200u;
            goto label_1fe200;
        }
    }
    ctx->pc = 0x1FE1F8u;
    // 0x1fe1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1F8u;
        // 0x1fe1fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE200u;
label_1fe200:
    // 0x1fe200: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1fe200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1fe204: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FE204u;
    {
        const bool branch_taken_0x1fe204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe204) {
            ctx->pc = 0x1FE208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE204u;
            // 0x1fe208: 0x9062004a  lbu         $v0, 0x4A($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 74)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe1f0;
        }
    }
    ctx->pc = 0x1FE20Cu;
    // 0x1fe20c: 0x3402ac00  ori         $v0, $zero, 0xAC00
    ctx->pc = 0x1fe20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44032);
    // 0x1fe210: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE210u;
        // 0x1fe214: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE218u;
}
