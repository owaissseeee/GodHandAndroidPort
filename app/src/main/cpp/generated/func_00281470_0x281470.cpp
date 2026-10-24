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

// Function: func_00281470
// Address: 0x281470 - 0x2814b8
void func_00281470_0x281470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00281470_0x281470");
#endif

    ctx->pc = 0x281470u;

    // 0x281470: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x281470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x281474: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281474u;
    {
        const bool branch_taken_0x281474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x281478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281474u;
        // 0x281478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281474) {
            ctx->pc = 0x281484u;
            goto label_281484;
        }
    }
    ctx->pc = 0x28147Cu;
    // 0x28147c: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28147Cu;
    {
        const bool branch_taken_0x28147c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x281480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28147Cu;
        // 0x281480: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28147c) {
            ctx->pc = 0x28149Cu;
            goto label_28149c;
        }
    }
    ctx->pc = 0x281484u;
label_281484:
    // 0x281484: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x281484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x281488: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x281488u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x28148c: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x28148cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x281490: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x281490u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x281494: 0x3e00008  jr          $ra
    ctx->pc = 0x281494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281494u;
        // 0x281498: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28149Cu;
label_28149c:
    // 0x28149c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28149cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2814a0: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x2814a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2814a4: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x2814a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x2814a8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x2814a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2814ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2814ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2814B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2814ACu;
        // 0x2814b0: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2814ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2814B4u;
    // 0x2814b4: 0x0  nop
    ctx->pc = 0x2814b4u;
    // NOP
    ctx->pc = 0x2814b8u;
}
