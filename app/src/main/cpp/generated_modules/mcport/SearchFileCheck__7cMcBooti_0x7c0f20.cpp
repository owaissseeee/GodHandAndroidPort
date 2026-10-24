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
// Function: SearchFileCheck__7cMcBooti
// Address: 0x7c0f20 - 0x7c0f80
void SearchFileCheck__7cMcBooti_0x7c0f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchFileCheck__7cMcBooti_0x7c0f20");
#endif

    ctx->pc = 0x7c0f20u;

    // 0x7c0f20: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x7c0f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0f24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0f28: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C0F28u;
    {
        const bool branch_taken_0x7c0f28 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x7C0F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0F28u;
        // 0x7c0f2c: 0xacc2007c  sw          $v0, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0f28) {
            ctx->pc = 0x7C0F38u;
            goto label_7c0f38;
        }
    }
    ctx->pc = 0x7C0F30u;
    // 0x7c0f30: 0x3e00008  jr          $ra
    ctx->pc = 0x7C0F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C0F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0F30u;
        // 0x7c0f34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C0F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C0F38u;
label_7c0f38:
    // 0x7c0f38: 0x24a30006  addiu       $v1, $a1, 0x6
    ctx->pc = 0x7c0f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x7c0f3c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x7c0f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x7c0f40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C0F40u;
    {
        const bool branch_taken_0x7c0f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0F40u;
        // 0x7c0f44: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0f40) {
            ctx->pc = 0x7C0F70u;
            goto label_7c0f70;
        }
    }
    ctx->pc = 0x7C0F48u;
    // 0x7c0f48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c0f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c0f4c: 0x244209a0  addiu       $v0, $v0, 0x9A0
    ctx->pc = 0x7c0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2464));
    // 0x7c0f50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c0f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c0f54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c0f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c0f58: 0x800008  jr          $a0
    ctx->pc = 0x7C0F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C0F60u: goto label_7c0f60;
            case 0x7C0F68u: goto label_7c0f68;
            case 0x7C0F70u: goto label_7c0f70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C0F58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C0F60u;
label_7c0f60:
    // 0x7c0f60: 0x3e00008  jr          $ra
    ctx->pc = 0x7C0F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0F60u;
        // 0x7c0f64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C0F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C0F68u;
label_7c0f68:
    // 0x7c0f68: 0x3e00008  jr          $ra
    ctx->pc = 0x7C0F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0F68u;
        // 0x7c0f6c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C0F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C0F70u;
label_7c0f70:
    // 0x7c0f70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c0f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c0f74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7c0f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0f78: 0x3e00008  jr          $ra
    ctx->pc = 0x7C0F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0F78u;
        // 0x7c0f7c: 0xacc3007c  sw          $v1, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C0F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C0F80u;
}
} // namespace gh_mcport
