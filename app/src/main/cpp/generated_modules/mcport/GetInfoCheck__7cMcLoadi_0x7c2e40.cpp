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
// Function: GetInfoCheck__7cMcLoadi
// Address: 0x7c2e40 - 0x7c2ea0
void GetInfoCheck__7cMcLoadi_0x7c2e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInfoCheck__7cMcLoadi_0x7c2e40");
#endif

    ctx->pc = 0x7c2e40u;

    // 0x7c2e40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c2e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2e44: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C2E44u;
    {
        const bool branch_taken_0x7c2e44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2E44u;
        // 0x7c2e48: 0xac83007c  sw          $v1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2e44) {
            ctx->pc = 0x7C2E54u;
            goto label_7c2e54;
        }
    }
    ctx->pc = 0x7C2E4Cu;
    // 0x7c2e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2E4Cu;
        // 0x7c2e50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2E54u;
label_7c2e54:
    // 0x7c2e54: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x7c2e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x7c2e58: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C2E58u;
    {
        const bool branch_taken_0x7c2e58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C2E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2E58u;
        // 0x7c2e5c: 0x28a2ffff  slti        $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2e58) {
            ctx->pc = 0x7C2E78u;
            goto label_7c2e78;
        }
    }
    ctx->pc = 0x7C2E60u;
    // 0x7c2e60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C2E60u;
    {
        const bool branch_taken_0x7c2e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2E60u;
        // 0x7c2e64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2e60) {
            ctx->pc = 0x7C2E80u;
            goto label_7c2e80;
        }
    }
    ctx->pc = 0x7C2E68u;
    // 0x7c2e68: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C2E68u;
    {
        const bool branch_taken_0x7c2e68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x7C2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2E68u;
        // 0x7c2e6c: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2e68) {
            ctx->pc = 0x7C2E84u;
            goto label_7c2e84;
        }
    }
    ctx->pc = 0x7C2E70u;
    // 0x7c2e70: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2E70u;
        // 0x7c2e74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2E78u;
label_7c2e78:
    // 0x7c2e78: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2E78u;
        // 0x7c2e7c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2E80u;
label_7c2e80:
    // 0x7c2e80: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x7c2e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_7c2e84:
    // 0x7c2e84: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x7c2e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x7c2e88: 0x24636900  addiu       $v1, $v1, 0x6900
    ctx->pc = 0x7c2e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26880));
    // 0x7c2e8c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x7c2e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c2e90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7c2e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2e94: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x7c2e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x7c2e98: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2E98u;
        // 0x7c2e9c: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2EA0u;
}
} // namespace gh_mcport
