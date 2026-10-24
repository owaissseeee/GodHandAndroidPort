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

// Function: cCoreSave_ckReelSlot
// Address: 0x1fc1c8 - 0x1fc210
void cCoreSave_ckReelSlot_0x1fc1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_ckReelSlot_0x1fc1c8");
#endif

    switch (ctx->pc) {
        case 0x1fc1dcu: goto label_1fc1dc;
        case 0x1fc1f0u: goto label_1fc1f0;
        default: break;
    }

    ctx->pc = 0x1fc1c8u;

    // 0x1fc1c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc1cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC1CCu;
    {
        const bool branch_taken_0x1fc1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1CCu;
        // 0x1fc1d0: 0x24440098  addiu       $a0, $v0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1cc) {
            ctx->pc = 0x1FC1E4u;
            goto label_1fc1e4;
        }
    }
    ctx->pc = 0x1FC1D4u;
    // 0x1fc1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1D4u;
        // 0x1fc1d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC1DCu;
label_1fc1dc:
    // 0x1fc1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1DCu;
        // 0x1fc1e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC1E4u;
label_1fc1e4:
    // 0x1fc1e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fc1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc1e8: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x1fc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1fc1ec: 0x0  nop
    ctx->pc = 0x1fc1ecu;
    // NOP
label_1fc1f0:
    // 0x1fc1f0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1fc1f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc1f4: 0x1065fff9  beq         $v1, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FC1F4u;
    {
        const bool branch_taken_0x1fc1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FC1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1F4u;
        // 0x1fc1f8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1f4) {
            ctx->pc = 0x1FC1DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc1dc;
        }
    }
    ctx->pc = 0x1FC1FCu;
    // 0x1fc1fc: 0x2cc2000a  sltiu       $v0, $a2, 0xA
    ctx->pc = 0x1fc1fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fc200: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FC200u;
    {
        const bool branch_taken_0x1fc200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC200u;
        // 0x1fc204: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc200) {
            ctx->pc = 0x1FC1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc1f0;
        }
    }
    ctx->pc = 0x1FC208u;
    // 0x1fc208: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC208u;
        // 0x1fc20c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC210u;
}
