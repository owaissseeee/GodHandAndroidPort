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

// Function: func_00281560
// Address: 0x281560 - 0x2815c0
void func_00281560_0x281560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00281560_0x281560");
#endif

    ctx->pc = 0x281560u;

    // 0x281560: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x281560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x281564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281568: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x281568u;
    {
        const bool branch_taken_0x281568 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281568u;
        // 0x28156c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281568) {
            ctx->pc = 0x281598u;
            goto label_281598;
        }
    }
    ctx->pc = 0x281570u;
    // 0x281570: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281570u;
    {
        const bool branch_taken_0x281570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281570u;
        // 0x281574: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281570) {
            ctx->pc = 0x281584u;
            goto label_281584;
        }
    }
    ctx->pc = 0x281578u;
    // 0x281578: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x281578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28157c: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28157Cu;
    {
        const bool branch_taken_0x28157c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x281580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28157Cu;
        // 0x281580: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28157c) {
            ctx->pc = 0x2815A4u;
            goto label_2815a4;
        }
    }
    ctx->pc = 0x281584u;
label_281584:
    // 0x281584: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x281584u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x281588: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x281588u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x28158c: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x28158cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x281590: 0x3e00008  jr          $ra
    ctx->pc = 0x281590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281590u;
        // 0x281594: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281598u;
label_281598:
    // 0x281598: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x281598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x28159c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28159Cu;
    {
        const bool branch_taken_0x28159c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2815A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28159Cu;
        // 0x2815a0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28159c) {
            ctx->pc = 0x2815A8u;
            goto label_2815a8;
        }
    }
    ctx->pc = 0x2815A4u;
label_2815a4:
    // 0x2815a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2815a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2815a8:
    // 0x2815a8: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x2815a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2815ac: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x2815acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x2815b0: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x2815b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2815b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2815B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2815B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815B4u;
        // 0x2815b8: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2815B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2815BCu;
    // 0x2815bc: 0x0  nop
    ctx->pc = 0x2815bcu;
    // NOP
    ctx->pc = 0x2815c0u;
}
