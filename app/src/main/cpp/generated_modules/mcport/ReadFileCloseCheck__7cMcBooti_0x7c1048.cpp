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
// Function: ReadFileCloseCheck__7cMcBooti
// Address: 0x7c1048 - 0x7c1090
void ReadFileCloseCheck__7cMcBooti_0x7c1048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadFileCloseCheck__7cMcBooti_0x7c1048");
#endif

    ctx->pc = 0x7c1048u;

    // 0x7c1048: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c1048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c104c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C104Cu;
    {
        const bool branch_taken_0x7c104c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C104Cu;
        // 0x7c1050: 0xac82007c  sw          $v0, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c104c) {
            ctx->pc = 0x7C105Cu;
            goto label_7c105c;
        }
    }
    ctx->pc = 0x7C1054u;
    // 0x7c1054: 0x3e00008  jr          $ra
    ctx->pc = 0x7C1054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1054u;
        // 0x7c1058: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C1054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C105Cu;
label_7c105c:
    // 0x7c105c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x7c105cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x7c1060: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C1060u;
    {
        const bool branch_taken_0x7c1060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1060u;
        // 0x7c1064: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1060) {
            ctx->pc = 0x7C1080u;
            goto label_7c1080;
        }
    }
    ctx->pc = 0x7C1068u;
    // 0x7c1068: 0x28a2fffd  slti        $v0, $a1, -0x3
    ctx->pc = 0x7c1068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x7c106c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C106Cu;
    {
        const bool branch_taken_0x7c106c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c106c) {
            ctx->pc = 0x7C1070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C106Cu;
            // 0x7c1070: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C107Cu;
            goto label_7c107c;
        }
    }
    ctx->pc = 0x7C1074u;
    // 0x7c1074: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7C1074u;
    {
        const bool branch_taken_0x7c1074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1074u;
        // 0x7c1078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1074) {
            ctx->pc = 0x7C1080u;
            goto label_7c1080;
        }
    }
    ctx->pc = 0x7C107Cu;
label_7c107c:
    // 0x7c107c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7c1080:
    // 0x7c1080: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x7c1080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x7c1084: 0x3e00008  jr          $ra
    ctx->pc = 0x7C1084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1084u;
        // 0x7c1088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C1084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C108Cu;
    // 0x7c108c: 0x0  nop
    ctx->pc = 0x7c108cu;
    // NOP
    ctx->pc = 0x7c1090u;
}
} // namespace gh_mcport
