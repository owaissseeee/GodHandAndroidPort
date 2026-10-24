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

// Function: func_001C3B98
// Address: 0x1c3b98 - 0x1c3be8
void func_001C3B98_0x1c3b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C3B98_0x1c3b98");
#endif

    ctx->pc = 0x1c3b98u;

    // 0x1c3b98: 0x9c8205b0  lwu         $v0, 0x5B0($a0)
    ctx->pc = 0x1c3b98u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1456)));
    // 0x1c3b9c: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1c3b9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1c3ba0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c3ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c3ba4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3BA4u;
    {
        const bool branch_taken_0x1c3ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3BA4u;
        // 0x1c3ba8: 0x8c8305b0  lw          $v1, 0x5B0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ba4) {
            ctx->pc = 0x1C3BC8u;
            goto label_1c3bc8;
        }
    }
    ctx->pc = 0x1C3BACu;
    // 0x1c3bac: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x1c3bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1c3bb0: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x1c3bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3bb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c3bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3bb8: 0xac8205b0  sw          $v0, 0x5B0($a0)
    ctx->pc = 0x1c3bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1456), GPR_U32(ctx, 2));
    // 0x1c3bbc: 0xa08302f4  sb          $v1, 0x2F4($a0)
    ctx->pc = 0x1c3bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c3bc0: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1c3bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3bc4: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1c3bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
label_1c3bc8:
    // 0x1c3bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3BD0u;
    // 0x1c3bd0: 0x0  nop
    ctx->pc = 0x1c3bd0u;
    // NOP
    // 0x1c3bd4: 0x0  nop
    ctx->pc = 0x1c3bd4u;
    // NOP
    // 0x1c3bd8: 0x0  nop
    ctx->pc = 0x1c3bd8u;
    // NOP
    // 0x1c3bdc: 0x0  nop
    ctx->pc = 0x1c3bdcu;
    // NOP
    // 0x1c3be0: 0x0  nop
    ctx->pc = 0x1c3be0u;
    // NOP
    // 0x1c3be4: 0x0  nop
    ctx->pc = 0x1c3be4u;
    // NOP
    ctx->pc = 0x1c3be8u;
}
