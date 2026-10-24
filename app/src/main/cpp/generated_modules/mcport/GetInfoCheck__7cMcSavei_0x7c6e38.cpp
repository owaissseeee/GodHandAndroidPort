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
// Function: GetInfoCheck__7cMcSavei
// Address: 0x7c6e38 - 0x7c6e98
void GetInfoCheck__7cMcSavei_0x7c6e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInfoCheck__7cMcSavei_0x7c6e38");
#endif

    ctx->pc = 0x7c6e38u;

    // 0x7c6e38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c6e3c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C6E3Cu;
    {
        const bool branch_taken_0x7c6e3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C6E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6E3Cu;
        // 0x7c6e40: 0xac83007c  sw          $v1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6e3c) {
            ctx->pc = 0x7C6E4Cu;
            goto label_7c6e4c;
        }
    }
    ctx->pc = 0x7C6E44u;
    // 0x7c6e44: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6E44u;
        // 0x7c6e48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6E4Cu;
label_7c6e4c:
    // 0x7c6e4c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x7c6e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x7c6e50: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C6E50u;
    {
        const bool branch_taken_0x7c6e50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C6E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6E50u;
        // 0x7c6e54: 0x28a2ffff  slti        $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6e50) {
            ctx->pc = 0x7C6E70u;
            goto label_7c6e70;
        }
    }
    ctx->pc = 0x7C6E58u;
    // 0x7c6e58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C6E58u;
    {
        const bool branch_taken_0x7c6e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6E58u;
        // 0x7c6e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6e58) {
            ctx->pc = 0x7C6E78u;
            goto label_7c6e78;
        }
    }
    ctx->pc = 0x7C6E60u;
    // 0x7c6e60: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C6E60u;
    {
        const bool branch_taken_0x7c6e60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x7C6E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6E60u;
        // 0x7c6e64: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6e60) {
            ctx->pc = 0x7C6E7Cu;
            goto label_7c6e7c;
        }
    }
    ctx->pc = 0x7C6E68u;
    // 0x7c6e68: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6E68u;
        // 0x7c6e6c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6E70u;
label_7c6e70:
    // 0x7c6e70: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6E70u;
        // 0x7c6e74: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6E78u;
label_7c6e78:
    // 0x7c6e78: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x7c6e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_7c6e7c:
    // 0x7c6e7c: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x7c6e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x7c6e80: 0x24636900  addiu       $v1, $v1, 0x6900
    ctx->pc = 0x7c6e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26880));
    // 0x7c6e84: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x7c6e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c6e88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7c6e88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6e8c: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x7c6e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x7c6e90: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6E90u;
        // 0x7c6e94: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6E98u;
}
} // namespace gh_mcport
