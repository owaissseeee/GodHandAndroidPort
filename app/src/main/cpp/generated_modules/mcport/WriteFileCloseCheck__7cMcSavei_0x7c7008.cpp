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
// Function: WriteFileCloseCheck__7cMcSavei
// Address: 0x7c7008 - 0x7c7048
void WriteFileCloseCheck__7cMcSavei_0x7c7008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WriteFileCloseCheck__7cMcSavei_0x7c7008");
#endif

    ctx->pc = 0x7c7008u;

    // 0x7c7008: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c7008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c700c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C700Cu;
    {
        const bool branch_taken_0x7c700c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C7010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C700Cu;
        // 0x7c7010: 0xac82007c  sw          $v0, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c700c) {
            ctx->pc = 0x7C701Cu;
            goto label_7c701c;
        }
    }
    ctx->pc = 0x7C7014u;
    // 0x7c7014: 0x3e00008  jr          $ra
    ctx->pc = 0x7C7014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7014u;
        // 0x7c7018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C701Cu;
label_7c701c:
    // 0x7c701c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x7c701cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x7c7020: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C7020u;
    {
        const bool branch_taken_0x7c7020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7020u;
        // 0x7c7024: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7020) {
            ctx->pc = 0x7C7038u;
            goto label_7c7038;
        }
    }
    ctx->pc = 0x7C7028u;
    // 0x7c7028: 0x28a2fffd  slti        $v0, $a1, -0x3
    ctx->pc = 0x7c7028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x7c702c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C702Cu;
    {
        const bool branch_taken_0x7c702c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c702c) {
            ctx->pc = 0x7C7030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C702Cu;
            // 0x7c7030: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C7034u;
            goto label_7c7034;
        }
    }
    ctx->pc = 0x7C7034u;
label_7c7034:
    // 0x7c7034: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x7c7034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_7c7038:
    // 0x7c7038: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x7c7038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x7c703c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C703Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C703Cu;
        // 0x7c7040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C703Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C7044u;
    // 0x7c7044: 0x0  nop
    ctx->pc = 0x7c7044u;
    // NOP
    ctx->pc = 0x7c7048u;
}
} // namespace gh_mcport
