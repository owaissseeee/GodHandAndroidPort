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

// Function: func_00394D00
// Address: 0x394d00 - 0x394d58
void func_00394D00_0x394d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00394D00_0x394d00");
#endif

    switch (ctx->pc) {
        case 0x394d20u: goto label_394d20;
        default: break;
    }

    ctx->pc = 0x394d00u;

    // 0x394d00: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x394d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x394d04: 0x8ca25520  lw          $v0, 0x5520($a1)
    ctx->pc = 0x394d04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5520u));
    // 0x394d08: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x394D08u;
    {
        const bool branch_taken_0x394d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D08u;
        // 0x394d0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394d08) {
            ctx->pc = 0x394D50u;
            goto label_394d50;
        }
    }
    ctx->pc = 0x394D10u;
    // 0x394d10: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x394d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394d14: 0x24c25520  addiu       $v0, $a2, 0x5520
    ctx->pc = 0x394d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 21792));
    // 0x394d18: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x394d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x394d1c: 0x0  nop
    ctx->pc = 0x394d1cu;
    // NOP
label_394d20:
    // 0x394d20: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x394d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x394d24: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x394D24u;
    {
        const bool branch_taken_0x394d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x394D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D24u;
        // 0x394d28: 0x8cc25520  lw          $v0, 0x5520($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 21792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394d24) {
            ctx->pc = 0x394D40u;
            goto label_394d40;
        }
    }
    ctx->pc = 0x394D2Cu;
    // 0x394d2c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x394d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x394d30: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x394d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394d34: 0xaca0fffc  sw          $zero, -0x4($a1)
    ctx->pc = 0x394d34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 0));
    // 0x394d38: 0x3e00008  jr          $ra
    ctx->pc = 0x394D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D38u;
        // 0x394d3c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394D40u;
label_394d40:
    // 0x394d40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x394d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x394d44: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x394d44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x394d48: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x394D48u;
    {
        const bool branch_taken_0x394d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D48u;
        // 0x394d4c: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394d48) {
            ctx->pc = 0x394D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394d20;
        }
    }
    ctx->pc = 0x394D50u;
label_394d50:
    // 0x394d50: 0x3e00008  jr          $ra
    ctx->pc = 0x394D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D50u;
        // 0x394d54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394D58u;
}
