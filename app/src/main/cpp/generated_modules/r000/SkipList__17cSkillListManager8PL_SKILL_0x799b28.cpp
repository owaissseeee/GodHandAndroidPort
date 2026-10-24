#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: SkipList__17cSkillListManager8PL_SKILL
// Address: 0x799b28 - 0x799b78
void SkipList__17cSkillListManager8PL_SKILL_0x799b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SkipList__17cSkillListManager8PL_SKILL_0x799b28");
#endif

    ctx->pc = 0x799b28u;

    // 0x799b28: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x799b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x799b2c: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x799B2Cu;
    {
        const bool branch_taken_0x799b2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x799B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B2Cu;
        // 0x799b30: 0x28a20021  slti        $v0, $a1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b2c) {
            ctx->pc = 0x799B60u;
            goto label_799b60;
        }
    }
    ctx->pc = 0x799B34u;
    // 0x799b34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799B34u;
    {
        const bool branch_taken_0x799b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B34u;
        // 0x799b38: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b34) {
            ctx->pc = 0x799B4Cu;
            goto label_799b4c;
        }
    }
    ctx->pc = 0x799B3Cu;
    // 0x799b3c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x799B3Cu;
    {
        const bool branch_taken_0x799b3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x799B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B3Cu;
        // 0x799b40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b3c) {
            ctx->pc = 0x799B60u;
            goto label_799b60;
        }
    }
    ctx->pc = 0x799B44u;
    // 0x799b44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x799B44u;
    {
        const bool branch_taken_0x799b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799b44) {
            ctx->pc = 0x799B6Cu;
            goto label_799b6c;
        }
    }
    ctx->pc = 0x799B4Cu;
label_799b4c:
    // 0x799b4c: 0x28a2005e  slti        $v0, $a1, 0x5E
    ctx->pc = 0x799b4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)94) ? 1 : 0);
    // 0x799b50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799B50u;
    {
        const bool branch_taken_0x799b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B50u;
        // 0x799b54: 0x28a2005c  slti        $v0, $a1, 0x5C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)92) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b50) {
            ctx->pc = 0x799B68u;
            goto label_799b68;
        }
    }
    ctx->pc = 0x799B58u;
    // 0x799b58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799B58u;
    {
        const bool branch_taken_0x799b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B58u;
        // 0x799b5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b58) {
            ctx->pc = 0x799B6Cu;
            goto label_799b6c;
        }
    }
    ctx->pc = 0x799B60u;
label_799b60:
    // 0x799b60: 0x3e00008  jr          $ra
    ctx->pc = 0x799B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B60u;
        // 0x799b64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B68u;
label_799b68:
    // 0x799b68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x799b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799b6c:
    // 0x799b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x799B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B74u;
    // 0x799b74: 0x0  nop
    ctx->pc = 0x799b74u;
    // NOP
    ctx->pc = 0x799b78u;
}
} // namespace gh_r000
