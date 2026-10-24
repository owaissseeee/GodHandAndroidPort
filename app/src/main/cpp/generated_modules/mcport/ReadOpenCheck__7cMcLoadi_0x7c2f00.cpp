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
// Function: ReadOpenCheck__7cMcLoadi
// Address: 0x7c2f00 - 0x7c2f78
void ReadOpenCheck__7cMcLoadi_0x7c2f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadOpenCheck__7cMcLoadi_0x7c2f00");
#endif

    ctx->pc = 0x7c2f00u;

    // 0x7c2f00: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x7c2f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2f04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c2f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2f08: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C2F08u;
    {
        const bool branch_taken_0x7c2f08 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x7C2F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2F08u;
        // 0x7c2f0c: 0xacc2007c  sw          $v0, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2f08) {
            ctx->pc = 0x7C2F18u;
            goto label_7c2f18;
        }
    }
    ctx->pc = 0x7C2F10u;
    // 0x7c2f10: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2F10u;
        // 0x7c2f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2F18u;
label_7c2f18:
    // 0x7c2f18: 0x24a30007  addiu       $v1, $a1, 0x7
    ctx->pc = 0x7c2f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x7c2f1c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x7c2f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x7c2f20: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x7C2F20u;
    {
        const bool branch_taken_0x7c2f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2F20u;
        // 0x7c2f24: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2f20) {
            ctx->pc = 0x7C2F68u;
            goto label_7c2f68;
        }
    }
    ctx->pc = 0x7C2F28u;
    // 0x7c2f28: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c2f2c: 0x24420ad0  addiu       $v0, $v0, 0xAD0
    ctx->pc = 0x7c2f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2768));
    // 0x7c2f30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c2f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c2f34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c2f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c2f38: 0x800008  jr          $a0
    ctx->pc = 0x7C2F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C2F40u: goto label_7c2f40;
            case 0x7C2F50u: goto label_7c2f50;
            case 0x7C2F60u: goto label_7c2f60;
            case 0x7C2F68u: goto label_7c2f68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2F38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C2F40u;
label_7c2f40:
    // 0x7c2f40: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x7c2f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7c2f44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x7c2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7c2f48: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2F48u;
        // 0x7c2f4c: 0xacc3007c  sw          $v1, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2F50u;
label_7c2f50:
    // 0x7c2f50: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x7c2f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7c2f54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7c2f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c2f58: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2F58u;
        // 0x7c2f5c: 0xacc3007c  sw          $v1, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2F60u;
label_7c2f60:
    // 0x7c2f60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7C2F60u;
    {
        const bool branch_taken_0x7c2f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2F60u;
        // 0x7c2f64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2f60) {
            ctx->pc = 0x7C2F6Cu;
            goto label_7c2f6c;
        }
    }
    ctx->pc = 0x7C2F68u;
label_7c2f68:
    // 0x7c2f68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c2f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7c2f6c:
    // 0x7c2f6c: 0xacc2007c  sw          $v0, 0x7C($a2)
    ctx->pc = 0x7c2f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
    // 0x7c2f70: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2F70u;
        // 0x7c2f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2F78u;
}
} // namespace gh_mcport
