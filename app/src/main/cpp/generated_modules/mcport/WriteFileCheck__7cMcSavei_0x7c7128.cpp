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
// Function: WriteFileCheck__7cMcSavei
// Address: 0x7c7128 - 0x7c7178
void WriteFileCheck__7cMcSavei_0x7c7128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WriteFileCheck__7cMcSavei_0x7c7128");
#endif

    ctx->pc = 0x7c7128u;

    // 0x7c7128: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x7c7128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c712c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c7130: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C7130u;
    {
        const bool branch_taken_0x7c7130 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x7C7134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7130u;
        // 0x7c7134: 0xacc2007c  sw          $v0, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7130) {
            ctx->pc = 0x7C7140u;
            goto label_7c7140;
        }
    }
    ctx->pc = 0x7C7138u;
    // 0x7c7138: 0x3e00008  jr          $ra
    ctx->pc = 0x7C7138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7138u;
        // 0x7c713c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C7140u;
label_7c7140:
    // 0x7c7140: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x7c7140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x7c7144: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x7c7144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x7c7148: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C7148u;
    {
        const bool branch_taken_0x7c7148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7148u;
        // 0x7c714c: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7148) {
            ctx->pc = 0x7C7168u;
            goto label_7c7168;
        }
    }
    ctx->pc = 0x7C7150u;
    // 0x7c7150: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c7150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c7154: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x7c7154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
    // 0x7c7158: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c7158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c715c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c715cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c7160: 0x800008  jr          $a0
    ctx->pc = 0x7C7160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C7168u: goto label_7c7168;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7160u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C7168u;
label_7c7168:
    // 0x7c7168: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x7c7168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x7c716c: 0xacc2007c  sw          $v0, 0x7C($a2)
    ctx->pc = 0x7c716cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
    // 0x7c7170: 0x3e00008  jr          $ra
    ctx->pc = 0x7C7170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7170u;
        // 0x7c7174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C7178u;
}
} // namespace gh_mcport
