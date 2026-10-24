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
// Function: WriteOpenCheck__7cMcSavei
// Address: 0x7c6f60 - 0x7c6fb8
void WriteOpenCheck__7cMcSavei_0x7c6f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WriteOpenCheck__7cMcSavei_0x7c6f60");
#endif

    ctx->pc = 0x7c6f60u;

    // 0x7c6f60: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x7c6f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6f64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c6f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c6f68: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C6F68u;
    {
        const bool branch_taken_0x7c6f68 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x7C6F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6F68u;
        // 0x7c6f6c: 0xacc2007c  sw          $v0, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6f68) {
            ctx->pc = 0x7C6F78u;
            goto label_7c6f78;
        }
    }
    ctx->pc = 0x7C6F70u;
    // 0x7c6f70: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6F70u;
        // 0x7c6f74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6F78u;
label_7c6f78:
    // 0x7c6f78: 0x24a30007  addiu       $v1, $a1, 0x7
    ctx->pc = 0x7c6f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x7c6f7c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x7c6f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x7c6f80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C6F80u;
    {
        const bool branch_taken_0x7c6f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6F80u;
        // 0x7c6f84: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6f80) {
            ctx->pc = 0x7C6FA8u;
            goto label_7c6fa8;
        }
    }
    ctx->pc = 0x7C6F88u;
    // 0x7c6f88: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c6f8c: 0x24420e00  addiu       $v0, $v0, 0xE00
    ctx->pc = 0x7c6f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3584));
    // 0x7c6f90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c6f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c6f94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c6f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c6f98: 0x800008  jr          $a0
    ctx->pc = 0x7C6F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C6FA0u: goto label_7c6fa0;
            case 0x7C6FA8u: goto label_7c6fa8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6F98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C6FA0u;
label_7c6fa0:
    // 0x7c6fa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7C6FA0u;
    {
        const bool branch_taken_0x7c6fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6FA0u;
        // 0x7c6fa4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6fa0) {
            ctx->pc = 0x7C6FACu;
            goto label_7c6fac;
        }
    }
    ctx->pc = 0x7C6FA8u;
label_7c6fa8:
    // 0x7c6fa8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x7c6fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_7c6fac:
    // 0x7c6fac: 0xacc2007c  sw          $v0, 0x7C($a2)
    ctx->pc = 0x7c6facu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 2));
    // 0x7c6fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6FB0u;
        // 0x7c6fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6FB8u;
}
} // namespace gh_mcport
