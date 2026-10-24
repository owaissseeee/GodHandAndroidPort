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

// Function: func_002B4F98
// Address: 0x2b4f98 - 0x2b4fe8
void func_002B4F98_0x2b4f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4F98_0x2b4f98");
#endif

    switch (ctx->pc) {
        case 0x2b4fa8u: goto label_2b4fa8;
        case 0x2b4fc0u: goto label_2b4fc0;
        default: break;
    }

    ctx->pc = 0x2b4f98u;

    // 0x2b4f98: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4F98u;
    {
        const bool branch_taken_0x2b4f98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F98u;
        // 0x2b4f9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f98) {
            ctx->pc = 0x2B4FB8u;
            goto label_2b4fb8;
        }
    }
    ctx->pc = 0x2B4FA0u;
    // 0x2b4fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FA0u;
        // 0x2b4fa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4FA8u;
label_2b4fa8:
    // 0x2b4fa8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b4fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b4fac: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x2b4facu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b4fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FB0u;
        // 0x2b4fb4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4FB8u;
label_2b4fb8:
    // 0x2b4fb8: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x2b4fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2b4fbc: 0x0  nop
    ctx->pc = 0x2b4fbcu;
    // NOP
label_2b4fc0:
    // 0x2b4fc0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2b4fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b4fc4: 0x1045fff8  beq         $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B4FC4u;
    {
        const bool branch_taken_0x2b4fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B4FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FC4u;
        // 0x2b4fc8: 0x240200ac  addiu       $v0, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4fc4) {
            ctx->pc = 0x2B4FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4fa8;
        }
    }
    ctx->pc = 0x2B4FCCu;
    // 0x2b4fcc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b4fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b4fd0: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x2b4fd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b4fd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B4FD4u;
    {
        const bool branch_taken_0x2b4fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FD4u;
        // 0x2b4fd8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4fd4) {
            ctx->pc = 0x2B4FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4fc0;
        }
    }
    ctx->pc = 0x2B4FDCu;
    // 0x2b4fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FDCu;
        // 0x2b4fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4FE4u;
    // 0x2b4fe4: 0x0  nop
    ctx->pc = 0x2b4fe4u;
    // NOP
    ctx->pc = 0x2b4fe8u;
}
