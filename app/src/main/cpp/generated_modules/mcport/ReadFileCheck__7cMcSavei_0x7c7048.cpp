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
// Function: ReadFileCheck__7cMcSavei
// Address: 0x7c7048 - 0x7c70b0
void ReadFileCheck__7cMcSavei_0x7c7048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadFileCheck__7cMcSavei_0x7c7048");
#endif

    ctx->pc = 0x7c7048u;

    // 0x7c7048: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c7048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c704c: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C704Cu;
    {
        const bool branch_taken_0x7c704c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x7C7050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C704Cu;
        // 0x7c7050: 0xac82007c  sw          $v0, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c704c) {
            ctx->pc = 0x7C705Cu;
            goto label_7c705c;
        }
    }
    ctx->pc = 0x7C7054u;
    // 0x7c7054: 0x3e00008  jr          $ra
    ctx->pc = 0x7C7054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7054u;
        // 0x7c7058: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C705Cu;
label_7c705c:
    // 0x7c705c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x7c705cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x7c7060: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7C7060u;
    {
        const bool branch_taken_0x7c7060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C7064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7060u;
        // 0x7c7064: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7060) {
            ctx->pc = 0x7C70A4u;
            goto label_7c70a4;
        }
    }
    ctx->pc = 0x7C7068u;
    // 0x7c7068: 0x28a2fffd  slti        $v0, $a1, -0x3
    ctx->pc = 0x7c7068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x7c706c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C706Cu;
    {
        const bool branch_taken_0x7c706c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C706Cu;
        // 0x7c7070: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c706c) {
            ctx->pc = 0x7C7084u;
            goto label_7c7084;
        }
    }
    ctx->pc = 0x7C7074u;
    // 0x7c7074: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C7074u;
    {
        const bool branch_taken_0x7c7074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x7c7074) {
            ctx->pc = 0x7C7078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C7074u;
            // 0x7c7078: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C70A4u;
            goto label_7c70a4;
        }
    }
    ctx->pc = 0x7C707Cu;
    // 0x7c707c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7C707Cu;
    {
        const bool branch_taken_0x7c707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C707Cu;
        // 0x7c7080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c707c) {
            ctx->pc = 0x7C70A4u;
            goto label_7c70a4;
        }
    }
    ctx->pc = 0x7C7084u;
label_7c7084:
    // 0x7c7084: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x7c7084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x7c7088: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C7088u;
    {
        const bool branch_taken_0x7c7088 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7088u;
        // 0x7c708c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7088) {
            ctx->pc = 0x7C70A4u;
            goto label_7c70a4;
        }
    }
    ctx->pc = 0x7C7090u;
    // 0x7c7090: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x7c7090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x7c7094: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C7094u;
    {
        const bool branch_taken_0x7c7094 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7094u;
        // 0x7c7098: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7094) {
            ctx->pc = 0x7C70A4u;
            goto label_7c70a4;
        }
    }
    ctx->pc = 0x7C709Cu;
    // 0x7c709c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C709Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C70A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C709Cu;
        // 0x7c70a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C709Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C70A4u;
label_7c70a4:
    // 0x7c70a4: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x7c70a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x7c70a8: 0x3e00008  jr          $ra
    ctx->pc = 0x7C70A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C70ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C70A8u;
        // 0x7c70ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C70A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C70B0u;
}
} // namespace gh_mcport
