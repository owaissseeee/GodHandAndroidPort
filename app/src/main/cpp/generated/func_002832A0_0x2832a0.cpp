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

// Function: func_002832A0
// Address: 0x2832a0 - 0x2832f8
void func_002832A0_0x2832a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002832A0_0x2832a0");
#endif

    ctx->pc = 0x2832a0u;

    // 0x2832a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2832a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2832a4: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2832A4u;
    {
        const bool branch_taken_0x2832a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2832A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832A4u;
        // 0x2832a8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832a4) {
            ctx->pc = 0x2832D4u;
            goto label_2832d4;
        }
    }
    ctx->pc = 0x2832ACu;
    // 0x2832ac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2832ACu;
    {
        const bool branch_taken_0x2832ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2832B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832ACu;
        // 0x2832b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832ac) {
            ctx->pc = 0x2832BCu;
            goto label_2832bc;
        }
    }
    ctx->pc = 0x2832B4u;
    // 0x2832b4: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2832B4u;
    {
        const bool branch_taken_0x2832b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2832B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832B4u;
        // 0x2832b8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832b4) {
            ctx->pc = 0x2832DCu;
            goto label_2832dc;
        }
    }
    ctx->pc = 0x2832BCu;
label_2832bc:
    // 0x2832bc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2832bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2832c0: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x2832c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2832c4: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x2832c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2832c8: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x2832c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2832cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2832CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2832D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832CCu;
        // 0x2832d0: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2832CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2832D4u;
label_2832d4:
    // 0x2832d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2832D4u;
    {
        const bool branch_taken_0x2832d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2832D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832D4u;
        // 0x2832d8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832d4) {
            ctx->pc = 0x2832E0u;
            goto label_2832e0;
        }
    }
    ctx->pc = 0x2832DCu;
label_2832dc:
    // 0x2832dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2832dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2832e0:
    // 0x2832e0: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x2832e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2832e4: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x2832e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x2832e8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x2832e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2832ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2832ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2832F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832ECu;
        // 0x2832f0: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2832ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2832F4u;
    // 0x2832f4: 0x0  nop
    ctx->pc = 0x2832f4u;
    // NOP
    ctx->pc = 0x2832f8u;
}
