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
// Function: SearchFileCheck__7cMcSavei
// Address: 0x7c6e98 - 0x7c6ef8
void SearchFileCheck__7cMcSavei_0x7c6e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchFileCheck__7cMcSavei_0x7c6e98");
#endif

    ctx->pc = 0x7c6e98u;

    // 0x7c6e98: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x7c6e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6e9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c6e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c6ea0: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C6EA0u;
    {
        const bool branch_taken_0x7c6ea0 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x7C6EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6EA0u;
        // 0x7c6ea4: 0xacc2007c  sw          $v0, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6ea0) {
            ctx->pc = 0x7C6EB0u;
            goto label_7c6eb0;
        }
    }
    ctx->pc = 0x7C6EA8u;
    // 0x7c6ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6EA8u;
        // 0x7c6eac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6EB0u;
label_7c6eb0:
    // 0x7c6eb0: 0x24a30006  addiu       $v1, $a1, 0x6
    ctx->pc = 0x7c6eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x7c6eb4: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x7c6eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x7c6eb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C6EB8u;
    {
        const bool branch_taken_0x7c6eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6EB8u;
        // 0x7c6ebc: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6eb8) {
            ctx->pc = 0x7C6EE8u;
            goto label_7c6ee8;
        }
    }
    ctx->pc = 0x7C6EC0u;
    // 0x7c6ec0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c6ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c6ec4: 0x24420dc0  addiu       $v0, $v0, 0xDC0
    ctx->pc = 0x7c6ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3520));
    // 0x7c6ec8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c6ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c6ecc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c6eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c6ed0: 0x800008  jr          $a0
    ctx->pc = 0x7C6ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C6ED8u: goto label_7c6ed8;
            case 0x7C6EE0u: goto label_7c6ee0;
            case 0x7C6EE8u: goto label_7c6ee8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6ED0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C6ED8u;
label_7c6ed8:
    // 0x7c6ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6ED8u;
        // 0x7c6edc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6EE0u;
label_7c6ee0:
    // 0x7c6ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6EE0u;
        // 0x7c6ee4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6EE8u;
label_7c6ee8:
    // 0x7c6ee8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c6ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c6eec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7c6eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6EF0u;
        // 0x7c6ef4: 0xacc3007c  sw          $v1, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6EF8u;
}
} // namespace gh_mcport
