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
// Function: saveDataCheck__7cMcSavePvT1Ui
// Address: 0x7c6d60 - 0x7c6de0
void saveDataCheck__7cMcSavePvT1Ui_0x7c6d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("saveDataCheck__7cMcSavePvT1Ui_0x7c6d60");
#endif

    switch (ctx->pc) {
        case 0x7c6d78u: goto label_7c6d78;
        case 0x7c6d88u: goto label_7c6d88;
        case 0x7c6db0u: goto label_7c6db0;
        default: break;
    }

    ctx->pc = 0x7c6d60u;

    // 0x7c6d60: 0x71082  srl         $v0, $a3, 2
    ctx->pc = 0x7c6d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
    // 0x7c6d64: 0x30e90003  andi        $t1, $a3, 0x3
    ctx->pc = 0x7c6d64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x7c6d68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C6D68u;
    {
        const bool branch_taken_0x7c6d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6D68u;
        // 0x7c6d6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6d68) {
            ctx->pc = 0x7C6DA0u;
            goto label_7c6da0;
        }
    }
    ctx->pc = 0x7C6D70u;
    // 0x7c6d70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x7c6d70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6d74: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x7c6d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_7c6d78:
    // 0x7c6d78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x7c6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7c6d7c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x7c6d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x7c6d80: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C6D80u;
    {
        const bool branch_taken_0x7c6d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C6D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6D80u;
        // 0x7c6d84: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6d80) {
            ctx->pc = 0x7C6D90u;
            goto label_7c6d90;
        }
    }
    ctx->pc = 0x7C6D88u;
label_7c6d88:
    // 0x7c6d88: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6D88u;
        // 0x7c6d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6D90u;
label_7c6d90:
    // 0x7c6d90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7c6d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x7c6d94: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x7c6d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x7c6d98: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7C6D98u;
    {
        const bool branch_taken_0x7c6d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c6d98) {
            ctx->pc = 0x7C6D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C6D98u;
            // 0x7c6d9c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C6D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c6d78;
        }
    }
    ctx->pc = 0x7C6DA0u;
label_7c6da0:
    // 0x7c6da0: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x7C6DA0u;
    {
        const bool branch_taken_0x7c6da0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6DA0u;
        // 0x7c6da4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6da0) {
            ctx->pc = 0x7C6DD8u;
            goto label_7c6dd8;
        }
    }
    ctx->pc = 0x7C6DA8u;
    // 0x7c6da8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x7c6da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6dac: 0x0  nop
    ctx->pc = 0x7c6dacu;
    // NOP
label_7c6db0:
    // 0x7c6db0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x7c6db0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6db4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x7c6db4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7c6db8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x7c6db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x7c6dbc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x7c6dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c6dc0: 0x1482fff1  bne         $a0, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x7C6DC0u;
    {
        const bool branch_taken_0x7c6dc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6DC0u;
        // 0x7c6dc4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6dc0) {
            ctx->pc = 0x7C6D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c6d88;
        }
    }
    ctx->pc = 0x7C6DC8u;
    // 0x7c6dc8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x7c6dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x7c6dcc: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x7c6dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x7c6dd0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7C6DD0u;
    {
        const bool branch_taken_0x7c6dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C6DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6DD0u;
        // 0x7c6dd4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6dd0) {
            ctx->pc = 0x7C6DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c6db0;
        }
    }
    ctx->pc = 0x7C6DD8u;
label_7c6dd8:
    // 0x7c6dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6DD8u;
        // 0x7c6ddc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6DE0u;
}
} // namespace gh_mcport
