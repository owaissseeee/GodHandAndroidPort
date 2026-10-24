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

// Function: func_00283378
// Address: 0x283378 - 0x2833c0
void func_00283378_0x283378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00283378_0x283378");
#endif

    ctx->pc = 0x283378u;

    // 0x283378: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x283378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x28337c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28337Cu;
    {
        const bool branch_taken_0x28337c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x283380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28337Cu;
        // 0x283380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28337c) {
            ctx->pc = 0x28338Cu;
            goto label_28338c;
        }
    }
    ctx->pc = 0x283384u;
    // 0x283384: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x283384u;
    {
        const bool branch_taken_0x283384 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x283388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283384u;
        // 0x283388: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283384) {
            ctx->pc = 0x2833A4u;
            goto label_2833a4;
        }
    }
    ctx->pc = 0x28338Cu;
label_28338c:
    // 0x28338c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x28338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x283390: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x283390u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x283394: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x283394u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x283398: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x283398u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x28339c: 0x3e00008  jr          $ra
    ctx->pc = 0x28339Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2833A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28339Cu;
        // 0x2833a0: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28339Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2833A4u;
label_2833a4:
    // 0x2833a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2833a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2833a8: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x2833a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2833ac: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x2833acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x2833b0: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x2833b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2833b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2833B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2833B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833B4u;
        // 0x2833b8: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2833B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2833BCu;
    // 0x2833bc: 0x0  nop
    ctx->pc = 0x2833bcu;
    // NOP
    ctx->pc = 0x2833c0u;
}
