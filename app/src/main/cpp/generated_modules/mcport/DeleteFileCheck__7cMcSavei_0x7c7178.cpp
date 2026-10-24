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
// Function: DeleteFileCheck__7cMcSavei
// Address: 0x7c7178 - 0x7c71c0
void DeleteFileCheck__7cMcSavei_0x7c7178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteFileCheck__7cMcSavei_0x7c7178");
#endif

    ctx->pc = 0x7c7178u;

    // 0x7c7178: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c7178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c717c: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C717Cu;
    {
        const bool branch_taken_0x7c717c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x7C7180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C717Cu;
        // 0x7c7180: 0xac82007c  sw          $v0, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c717c) {
            ctx->pc = 0x7C718Cu;
            goto label_7c718c;
        }
    }
    ctx->pc = 0x7C7184u;
    // 0x7c7184: 0x3e00008  jr          $ra
    ctx->pc = 0x7C7184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7184u;
        // 0x7c7188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C718Cu;
label_7c718c:
    // 0x7c718c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x7c718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x7c7190: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7C7190u;
    {
        const bool branch_taken_0x7c7190 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7190u;
        // 0x7c7194: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7190) {
            ctx->pc = 0x7C71B4u;
            goto label_7c71b4;
        }
    }
    ctx->pc = 0x7C7198u;
    // 0x7c7198: 0x28a2fffc  slti        $v0, $a1, -0x4
    ctx->pc = 0x7c7198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967292) ? 1 : 0);
    // 0x7c719c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C719Cu;
    {
        const bool branch_taken_0x7c719c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C719Cu;
        // 0x7c71a0: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c719c) {
            ctx->pc = 0x7C71B0u;
            goto label_7c71b0;
        }
    }
    ctx->pc = 0x7C71A4u;
    // 0x7c71a4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x7c71a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x7c71a8: 0x54a20001  bnel        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C71A8u;
    {
        const bool branch_taken_0x7c71a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c71a8) {
            ctx->pc = 0x7C71ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C71A8u;
            // 0x7c71ac: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C71B0u;
            goto label_7c71b0;
        }
    }
    ctx->pc = 0x7C71B0u;
label_7c71b0:
    // 0x7c71b0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x7c71b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_7c71b4:
    // 0x7c71b4: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x7c71b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x7c71b8: 0x3e00008  jr          $ra
    ctx->pc = 0x7C71B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C71B8u;
        // 0x7c71bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C71B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C71C0u;
}
} // namespace gh_mcport
