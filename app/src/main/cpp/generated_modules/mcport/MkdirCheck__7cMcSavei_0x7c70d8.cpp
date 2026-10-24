#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: MkdirCheck__7cMcSavei
// Address: 0x7c70d8 - 0x7c7128
void MkdirCheck__7cMcSavei_0x7c70d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MkdirCheck__7cMcSavei_0x7c70d8");
#endif

    switch (ctx->pc) {
        case 0x7c70e4u: goto label_7c70e4;
        default: break;
    }

    ctx->pc = 0x7c70d8u;

    // 0x7c70d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c70dc: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C70DCu;
    {
        const bool branch_taken_0x7c70dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C70E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C70DCu;
        // 0x7c70e0: 0xac82007c  sw          $v0, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c70dc) {
            ctx->pc = 0x7C70ECu;
            goto label_7c70ec;
        }
    }
    ctx->pc = 0x7C70E4u;
label_7c70e4:
    // 0x7c70e4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C70E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C70E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C70E4u;
        // 0x7c70e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C70E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C70ECu;
label_7c70ec:
    // 0x7c70ec: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x7c70ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x7c70f0: 0x0  nop
    ctx->pc = 0x7c70f0u;
    // NOP
    // 0x7c70f4: 0x10a2fffb  beq         $a1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C70F4u;
    {
        const bool branch_taken_0x7c70f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C70F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C70F4u;
        // 0x7c70f8: 0x28a2fffd  slti        $v0, $a1, -0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c70f4) {
            ctx->pc = 0x7C70E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c70e4;
        }
    }
    ctx->pc = 0x7C70FCu;
    // 0x7c70fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C70FCu;
    {
        const bool branch_taken_0x7c70fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C70FCu;
        // 0x7c7100: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c70fc) {
            ctx->pc = 0x7C7118u;
            goto label_7c7118;
        }
    }
    ctx->pc = 0x7C7104u;
    // 0x7c7104: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x7c7104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x7c7108: 0x50a20003  beql        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C7108u;
    {
        const bool branch_taken_0x7c7108 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x7c7108) {
            ctx->pc = 0x7C710Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C7108u;
            // 0x7c710c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C7118u;
            goto label_7c7118;
        }
    }
    ctx->pc = 0x7C7110u;
    // 0x7c7110: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x7c7110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x7c7114: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x7c7114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_7c7118:
    // 0x7c7118: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x7c7118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x7c711c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C711Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C711Cu;
        // 0x7c7120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C711Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C7124u;
    // 0x7c7124: 0x0  nop
    ctx->pc = 0x7c7124u;
    // NOP
    ctx->pc = 0x7c7128u;
}
} // namespace gh_mcport
