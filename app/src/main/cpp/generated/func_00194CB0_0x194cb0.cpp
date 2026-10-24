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

// Function: func_00194CB0
// Address: 0x194cb0 - 0x194d10
void func_00194CB0_0x194cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00194CB0_0x194cb0");
#endif

    switch (ctx->pc) {
        case 0x194cc4u: goto label_194cc4;
        default: break;
    }

    ctx->pc = 0x194cb0u;

    // 0x194cb0: 0x908302f6  lbu         $v1, 0x2F6($a0)
    ctx->pc = 0x194cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 758)));
    // 0x194cb4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x194CB4u;
    {
        const bool branch_taken_0x194cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x194CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CB4u;
        // 0x194cb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194cb4) {
            ctx->pc = 0x194CCCu;
            goto label_194ccc;
        }
    }
    ctx->pc = 0x194CBCu;
    // 0x194cbc: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x194CBCu;
    {
        const bool branch_taken_0x194cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x194cbc) {
            ctx->pc = 0x194CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194CBCu;
            // 0x194cc0: 0x94820af0  lhu         $v0, 0xAF0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194CE0u;
            goto label_194ce0;
        }
    }
    ctx->pc = 0x194CC4u;
label_194cc4:
    // 0x194cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x194CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194CCCu;
label_194ccc:
    // 0x194ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194cd0: 0xa4800af0  sh          $zero, 0xAF0($a0)
    ctx->pc = 0x194cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2800), (uint16_t)GPR_U32(ctx, 0));
    // 0x194cd4: 0xa08202f6  sb          $v0, 0x2F6($a0)
    ctx->pc = 0x194cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x194cd8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x194cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x194cdc: 0x94820af0  lhu         $v0, 0xAF0($a0)
    ctx->pc = 0x194cdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2800)));
label_194ce0:
    // 0x194ce0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x194ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x194ce4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x194ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x194ce8: 0x461fff6  bgez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x194CE8u;
    {
        const bool branch_taken_0x194ce8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x194CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CE8u;
        // 0x194cec: 0xa4820af0  sh          $v0, 0xAF0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2800), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ce8) {
            ctx->pc = 0x194CC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194cc4;
        }
    }
    ctx->pc = 0x194CF0u;
    // 0x194cf0: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x194cf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x194cf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x194cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194cf8: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x194cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x194cfc: 0xa0830af2  sb          $v1, 0xAF2($a0)
    ctx->pc = 0x194cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2802), (uint8_t)GPR_U32(ctx, 3));
    // 0x194d00: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x194d00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x194d04: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x194d04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x194d08: 0x3e00008  jr          $ra
    ctx->pc = 0x194D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194D10u;
}
