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

// Function: func_00283438
// Address: 0x283438 - 0x283498
void func_00283438_0x283438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00283438_0x283438");
#endif

    ctx->pc = 0x283438u;

    // 0x283438: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x283438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x28343c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283440: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x283440u;
    {
        const bool branch_taken_0x283440 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x283444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283440u;
        // 0x283444: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283440) {
            ctx->pc = 0x283470u;
            goto label_283470;
        }
    }
    ctx->pc = 0x283448u;
    // 0x283448: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283448u;
    {
        const bool branch_taken_0x283448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283448u;
        // 0x28344c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283448) {
            ctx->pc = 0x28345Cu;
            goto label_28345c;
        }
    }
    ctx->pc = 0x283450u;
    // 0x283450: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x283450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x283454: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x283454u;
    {
        const bool branch_taken_0x283454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x283458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283454u;
        // 0x283458: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283454) {
            ctx->pc = 0x28347Cu;
            goto label_28347c;
        }
    }
    ctx->pc = 0x28345Cu;
label_28345c:
    // 0x28345c: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x28345cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x283460: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x283460u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x283464: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x283464u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x283468: 0x3e00008  jr          $ra
    ctx->pc = 0x283468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283468u;
        // 0x28346c: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283470u;
label_283470:
    // 0x283470: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x283470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x283474: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283474u;
    {
        const bool branch_taken_0x283474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283474u;
        // 0x283478: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283474) {
            ctx->pc = 0x283480u;
            goto label_283480;
        }
    }
    ctx->pc = 0x28347Cu;
label_28347c:
    // 0x28347c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28347cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_283480:
    // 0x283480: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x283480u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x283484: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x283484u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x283488: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x283488u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x28348c: 0x3e00008  jr          $ra
    ctx->pc = 0x28348Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28348Cu;
        // 0x283490: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28348Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283494u;
    // 0x283494: 0x0  nop
    ctx->pc = 0x283494u;
    // NOP
    ctx->pc = 0x283498u;
}
