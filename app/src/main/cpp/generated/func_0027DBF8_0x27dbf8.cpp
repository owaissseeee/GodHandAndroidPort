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

// Function: func_0027DBF8
// Address: 0x27dbf8 - 0x27dc50
void func_0027DBF8_0x27dbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027DBF8_0x27dbf8");
#endif

    ctx->pc = 0x27dbf8u;

    // 0x27dbf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27dbfc: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27DBFCu;
    {
        const bool branch_taken_0x27dbfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBFCu;
        // 0x27dc00: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbfc) {
            ctx->pc = 0x27DC2Cu;
            goto label_27dc2c;
        }
    }
    ctx->pc = 0x27DC04u;
    // 0x27dc04: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DC04u;
    {
        const bool branch_taken_0x27dc04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC04u;
        // 0x27dc08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc04) {
            ctx->pc = 0x27DC14u;
            goto label_27dc14;
        }
    }
    ctx->pc = 0x27DC0Cu;
    // 0x27dc0c: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27DC0Cu;
    {
        const bool branch_taken_0x27dc0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC0Cu;
        // 0x27dc10: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc0c) {
            ctx->pc = 0x27DC34u;
            goto label_27dc34;
        }
    }
    ctx->pc = 0x27DC14u;
label_27dc14:
    // 0x27dc14: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x27dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27dc18: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x27dc18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27dc1c: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x27dc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x27dc20: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x27dc20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27dc24: 0x3e00008  jr          $ra
    ctx->pc = 0x27DC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC24u;
        // 0x27dc28: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DC2Cu;
label_27dc2c:
    // 0x27dc2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27DC2Cu;
    {
        const bool branch_taken_0x27dc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC2Cu;
        // 0x27dc30: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc2c) {
            ctx->pc = 0x27DC38u;
            goto label_27dc38;
        }
    }
    ctx->pc = 0x27DC34u;
label_27dc34:
    // 0x27dc34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x27dc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27dc38:
    // 0x27dc38: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x27dc38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x27dc3c: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x27dc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x27dc40: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x27dc40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27dc44: 0x3e00008  jr          $ra
    ctx->pc = 0x27DC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC44u;
        // 0x27dc48: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DC4Cu;
    // 0x27dc4c: 0x0  nop
    ctx->pc = 0x27dc4cu;
    // NOP
    ctx->pc = 0x27dc50u;
}
