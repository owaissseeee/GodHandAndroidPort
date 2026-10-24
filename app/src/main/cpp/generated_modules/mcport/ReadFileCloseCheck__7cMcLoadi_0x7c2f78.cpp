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
// Function: ReadFileCloseCheck__7cMcLoadi
// Address: 0x7c2f78 - 0x7c2fd0
void ReadFileCloseCheck__7cMcLoadi_0x7c2f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadFileCloseCheck__7cMcLoadi_0x7c2f78");
#endif

    ctx->pc = 0x7c2f78u;

    // 0x7c2f78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2f7c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C2F7Cu;
    {
        const bool branch_taken_0x7c2f7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C2F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2F7Cu;
        // 0x7c2f80: 0xac82007c  sw          $v0, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2f7c) {
            ctx->pc = 0x7C2F8Cu;
            goto label_7c2f8c;
        }
    }
    ctx->pc = 0x7C2F84u;
    // 0x7c2f84: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2F84u;
        // 0x7c2f88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2F8Cu;
label_7c2f8c:
    // 0x7c2f8c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x7c2f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x7c2f90: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C2F90u;
    {
        const bool branch_taken_0x7c2f90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C2F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2F90u;
        // 0x7c2f94: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2f90) {
            ctx->pc = 0x7C2FC0u;
            goto label_7c2fc0;
        }
    }
    ctx->pc = 0x7C2F98u;
    // 0x7c2f98: 0x28a2fffd  slti        $v0, $a1, -0x3
    ctx->pc = 0x7c2f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x7c2f9c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7C2F9Cu;
    {
        const bool branch_taken_0x7c2f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C2FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2F9Cu;
        // 0x7c2fa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2f9c) {
            ctx->pc = 0x7C2FC0u;
            goto label_7c2fc0;
        }
    }
    ctx->pc = 0x7C2FA4u;
    // 0x7c2fa4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x7c2fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x7c2fa8: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C2FA8u;
    {
        const bool branch_taken_0x7c2fa8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2FA8u;
        // 0x7c2fac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2fa8) {
            ctx->pc = 0x7C2FC0u;
            goto label_7c2fc0;
        }
    }
    ctx->pc = 0x7C2FB0u;
    // 0x7c2fb0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x7c2fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7c2fb4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x7c2fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7c2fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2FB8u;
        // 0x7c2fbc: 0xac83007c  sw          $v1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2FC0u;
label_7c2fc0:
    // 0x7c2fc0: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x7c2fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x7c2fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2FC4u;
        // 0x7c2fc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2FCCu;
    // 0x7c2fcc: 0x0  nop
    ctx->pc = 0x7c2fccu;
    // NOP
    ctx->pc = 0x7c2fd0u;
}
} // namespace gh_mcport
