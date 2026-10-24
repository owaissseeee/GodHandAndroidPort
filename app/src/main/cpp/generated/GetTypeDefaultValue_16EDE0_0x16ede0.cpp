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

// Function: GetTypeDefaultValue_16EDE0
// Address: 0x16ede0 - 0x16ee10
void GetTypeDefaultValue_16EDE0_0x16ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTypeDefaultValue_16EDE0_0x16ede0");
#endif

    ctx->pc = 0x16ede0u;

    // 0x16ede0: 0x90830064  lbu         $v1, 0x64($a0)
    ctx->pc = 0x16ede0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x16ede4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16EDE4u;
    {
        const bool branch_taken_0x16ede4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDE4u;
        // 0x16ede8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ede4) {
            ctx->pc = 0x16EDFCu;
            goto label_16edfc;
        }
    }
    ctx->pc = 0x16EDECu;
    // 0x16edec: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16EDECu;
    {
        const bool branch_taken_0x16edec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EDECu;
        // 0x16edf0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16edec) {
            ctx->pc = 0x16EE08u;
            goto label_16ee08;
        }
    }
    ctx->pc = 0x16EDF4u;
    // 0x16edf4: 0x3e00008  jr          $ra
    ctx->pc = 0x16EDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EDFCu;
label_16edfc:
    // 0x16edfc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ee00: 0x3e00008  jr          $ra
    ctx->pc = 0x16EE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE00u;
        // 0x16ee04: 0xac820060  sw          $v0, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EE08u;
label_16ee08:
    // 0x16ee08: 0x3e00008  jr          $ra
    ctx->pc = 0x16EE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE08u;
        // 0x16ee0c: 0xac820060  sw          $v0, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EE10u;
}
