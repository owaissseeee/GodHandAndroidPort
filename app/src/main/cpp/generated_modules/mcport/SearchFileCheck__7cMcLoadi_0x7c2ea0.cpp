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
// Function: SearchFileCheck__7cMcLoadi
// Address: 0x7c2ea0 - 0x7c2f00
void SearchFileCheck__7cMcLoadi_0x7c2ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchFileCheck__7cMcLoadi_0x7c2ea0");
#endif

    ctx->pc = 0x7c2ea0u;

    // 0x7c2ea0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x7c2ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2ea4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2ea8: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C2EA8u;
    {
        const bool branch_taken_0x7c2ea8 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x7C2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2EA8u;
        // 0x7c2eac: 0xacc2007c  sw          $v0, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2ea8) {
            ctx->pc = 0x7C2EB8u;
            goto label_7c2eb8;
        }
    }
    ctx->pc = 0x7C2EB0u;
    // 0x7c2eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2EB0u;
        // 0x7c2eb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2EB8u;
label_7c2eb8:
    // 0x7c2eb8: 0x24a30006  addiu       $v1, $a1, 0x6
    ctx->pc = 0x7c2eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x7c2ebc: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x7c2ebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x7c2ec0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C2EC0u;
    {
        const bool branch_taken_0x7c2ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2EC0u;
        // 0x7c2ec4: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2ec0) {
            ctx->pc = 0x7C2EF0u;
            goto label_7c2ef0;
        }
    }
    ctx->pc = 0x7C2EC8u;
    // 0x7c2ec8: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c2ecc: 0x24420ab0  addiu       $v0, $v0, 0xAB0
    ctx->pc = 0x7c2eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2736));
    // 0x7c2ed0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c2ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c2ed4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c2ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c2ed8: 0x800008  jr          $a0
    ctx->pc = 0x7C2ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C2EE0u: goto label_7c2ee0;
            case 0x7C2EE8u: goto label_7c2ee8;
            case 0x7C2EF0u: goto label_7c2ef0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2ED8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C2EE0u;
label_7c2ee0:
    // 0x7c2ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2EE0u;
        // 0x7c2ee4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2EE8u;
label_7c2ee8:
    // 0x7c2ee8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7C2EE8u;
    {
        const bool branch_taken_0x7c2ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2EE8u;
        // 0x7c2eec: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2ee8) {
            ctx->pc = 0x7C2EF4u;
            goto label_7c2ef4;
        }
    }
    ctx->pc = 0x7C2EF0u;
label_7c2ef0:
    // 0x7c2ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c2ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7c2ef4:
    // 0x7c2ef4: 0xacc2007c  sw          $v0, 0x7C($a2)
    ctx->pc = 0x7c2ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
    // 0x7c2ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2EF8u;
        // 0x7c2efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2F00u;
}
} // namespace gh_mcport
