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

// Function: func_00190CC8
// Address: 0x190cc8 - 0x190d28
void func_00190CC8_0x190cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00190CC8_0x190cc8");
#endif

    switch (ctx->pc) {
        case 0x190cdcu: goto label_190cdc;
        default: break;
    }

    ctx->pc = 0x190cc8u;

    // 0x190cc8: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x190cc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x190ccc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x190CCCu;
    {
        const bool branch_taken_0x190ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190CCCu;
        // 0x190cd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ccc) {
            ctx->pc = 0x190CE4u;
            goto label_190ce4;
        }
    }
    ctx->pc = 0x190CD4u;
    // 0x190cd4: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x190CD4u;
    {
        const bool branch_taken_0x190cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x190cd4) {
            ctx->pc = 0x190CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190CD4u;
            // 0x190cd8: 0x94820f84  lhu         $v0, 0xF84($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3972)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190D00u;
            goto label_190d00;
        }
    }
    ctx->pc = 0x190CDCu;
label_190cdc:
    // 0x190cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x190CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190CE4u;
label_190ce4:
    // 0x190ce4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x190ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x190ce8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x190ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190cec: 0xa4820f84  sh          $v0, 0xF84($a0)
    ctx->pc = 0x190cecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3972), (uint16_t)GPR_U32(ctx, 2));
    // 0x190cf0: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x190cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x190cf4: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x190cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x190cf8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x190cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x190cfc: 0x94820f84  lhu         $v0, 0xF84($a0)
    ctx->pc = 0x190cfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3972)));
label_190d00:
    // 0x190d00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x190d04: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x190d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x190d08: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x190D08u;
    {
        const bool branch_taken_0x190d08 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x190D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D08u;
        // 0x190d0c: 0xa4820f84  sh          $v0, 0xF84($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 3972), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d08) {
            ctx->pc = 0x190CDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190cdc;
        }
    }
    ctx->pc = 0x190D10u;
    // 0x190d10: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x190d10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x190d14: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x190d14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x190d18: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x190d18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x190d1c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x190d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x190d20: 0x3e00008  jr          $ra
    ctx->pc = 0x190D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190D28u;
}
