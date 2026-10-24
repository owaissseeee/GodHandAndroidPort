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
// Function: ReadFileCloseCheck__7cMcSavei
// Address: 0x7c6fb8 - 0x7c7008
void ReadFileCloseCheck__7cMcSavei_0x7c6fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadFileCloseCheck__7cMcSavei_0x7c6fb8");
#endif

    ctx->pc = 0x7c6fb8u;

    // 0x7c6fb8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c6fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c6fbc: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C6FBCu;
    {
        const bool branch_taken_0x7c6fbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6FBCu;
        // 0x7c6fc0: 0xac82007c  sw          $v0, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6fbc) {
            ctx->pc = 0x7C6FCCu;
            goto label_7c6fcc;
        }
    }
    ctx->pc = 0x7C6FC4u;
    // 0x7c6fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6FC4u;
        // 0x7c6fc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6FCCu;
label_7c6fcc:
    // 0x7c6fcc: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x7c6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x7c6fd0: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C6FD0u;
    {
        const bool branch_taken_0x7c6fd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6FD0u;
        // 0x7c6fd4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6fd0) {
            ctx->pc = 0x7C6FF8u;
            goto label_7c6ff8;
        }
    }
    ctx->pc = 0x7C6FD8u;
    // 0x7c6fd8: 0x28a2fffd  slti        $v0, $a1, -0x3
    ctx->pc = 0x7c6fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x7c6fdc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C6FDCu;
    {
        const bool branch_taken_0x7c6fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C6FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6FDCu;
        // 0x7c6fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6fdc) {
            ctx->pc = 0x7C6FF8u;
            goto label_7c6ff8;
        }
    }
    ctx->pc = 0x7C6FE4u;
    // 0x7c6fe4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x7c6fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x7c6fe8: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C6FE8u;
    {
        const bool branch_taken_0x7c6fe8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C6FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6FE8u;
        // 0x7c6fec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6fe8) {
            ctx->pc = 0x7C6FF8u;
            goto label_7c6ff8;
        }
    }
    ctx->pc = 0x7C6FF0u;
    // 0x7c6ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6FF0u;
        // 0x7c6ff4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6FF8u;
label_7c6ff8:
    // 0x7c6ff8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x7c6ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x7c6ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6FFCu;
        // 0x7c7000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C7004u;
    // 0x7c7004: 0x0  nop
    ctx->pc = 0x7c7004u;
    // NOP
    ctx->pc = 0x7c7008u;
}
} // namespace gh_mcport
