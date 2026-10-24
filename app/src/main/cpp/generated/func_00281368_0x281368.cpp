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

// Function: func_00281368
// Address: 0x281368 - 0x2813c0
void func_00281368_0x281368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00281368_0x281368");
#endif

    ctx->pc = 0x281368u;

    // 0x281368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28136c: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28136Cu;
    {
        const bool branch_taken_0x28136c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x281370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28136Cu;
        // 0x281370: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28136c) {
            ctx->pc = 0x28139Cu;
            goto label_28139c;
        }
    }
    ctx->pc = 0x281374u;
    // 0x281374: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281374u;
    {
        const bool branch_taken_0x281374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x281378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281374u;
        // 0x281378: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281374) {
            ctx->pc = 0x281384u;
            goto label_281384;
        }
    }
    ctx->pc = 0x28137Cu;
    // 0x28137c: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28137Cu;
    {
        const bool branch_taken_0x28137c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x281380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28137Cu;
        // 0x281380: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28137c) {
            ctx->pc = 0x2813A4u;
            goto label_2813a4;
        }
    }
    ctx->pc = 0x281384u;
label_281384:
    // 0x281384: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x281384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x281388: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x281388u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x28138c: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x28138cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x281390: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x281390u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x281394: 0x3e00008  jr          $ra
    ctx->pc = 0x281394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281394u;
        // 0x281398: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28139Cu;
label_28139c:
    // 0x28139c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28139Cu;
    {
        const bool branch_taken_0x28139c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2813A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28139Cu;
        // 0x2813a0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28139c) {
            ctx->pc = 0x2813A8u;
            goto label_2813a8;
        }
    }
    ctx->pc = 0x2813A4u;
label_2813a4:
    // 0x2813a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2813a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2813a8:
    // 0x2813a8: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x2813a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2813ac: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x2813acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x2813b0: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x2813b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2813b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2813B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2813B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813B4u;
        // 0x2813b8: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2813B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2813BCu;
    // 0x2813bc: 0x0  nop
    ctx->pc = 0x2813bcu;
    // NOP
    ctx->pc = 0x2813c0u;
}
