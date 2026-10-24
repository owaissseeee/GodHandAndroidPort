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
// Function: ReadOpenCheck__7cMcSavei
// Address: 0x7c6ef8 - 0x7c6f60
void ReadOpenCheck__7cMcSavei_0x7c6ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadOpenCheck__7cMcSavei_0x7c6ef8");
#endif

    ctx->pc = 0x7c6ef8u;

    // 0x7c6ef8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x7c6ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6efc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c6f00: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C6F00u;
    {
        const bool branch_taken_0x7c6f00 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x7C6F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6F00u;
        // 0x7c6f04: 0xacc2007c  sw          $v0, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6f00) {
            ctx->pc = 0x7C6F10u;
            goto label_7c6f10;
        }
    }
    ctx->pc = 0x7C6F08u;
    // 0x7c6f08: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6F08u;
        // 0x7c6f0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6F10u;
label_7c6f10:
    // 0x7c6f10: 0x24a30007  addiu       $v1, $a1, 0x7
    ctx->pc = 0x7c6f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x7c6f14: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x7c6f14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x7c6f18: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C6F18u;
    {
        const bool branch_taken_0x7c6f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6F18u;
        // 0x7c6f1c: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6f18) {
            ctx->pc = 0x7C6F50u;
            goto label_7c6f50;
        }
    }
    ctx->pc = 0x7C6F20u;
    // 0x7c6f20: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c6f24: 0x24420de0  addiu       $v0, $v0, 0xDE0
    ctx->pc = 0x7c6f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3552));
    // 0x7c6f28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c6f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c6f2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c6f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c6f30: 0x800008  jr          $a0
    ctx->pc = 0x7C6F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C6F38u: goto label_7c6f38;
            case 0x7C6F40u: goto label_7c6f40;
            case 0x7C6F48u: goto label_7c6f48;
            case 0x7C6F50u: goto label_7c6f50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6F30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C6F38u;
label_7c6f38:
    // 0x7c6f38: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6F38u;
        // 0x7c6f3c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6F40u;
label_7c6f40:
    // 0x7c6f40: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6F40u;
        // 0x7c6f44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6F48u;
label_7c6f48:
    // 0x7c6f48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7C6F48u;
    {
        const bool branch_taken_0x7c6f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6F48u;
        // 0x7c6f4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6f48) {
            ctx->pc = 0x7C6F54u;
            goto label_7c6f54;
        }
    }
    ctx->pc = 0x7C6F50u;
label_7c6f50:
    // 0x7c6f50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7c6f54:
    // 0x7c6f54: 0xacc2007c  sw          $v0, 0x7C($a2)
    ctx->pc = 0x7c6f54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
    // 0x7c6f58: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6F58u;
        // 0x7c6f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6F60u;
}
} // namespace gh_mcport
