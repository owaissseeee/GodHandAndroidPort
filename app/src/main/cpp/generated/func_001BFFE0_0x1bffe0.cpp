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

// Function: func_001BFFE0
// Address: 0x1bffe0 - 0x1c0018
void func_001BFFE0_0x1bffe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BFFE0_0x1bffe0");
#endif

    ctx->pc = 0x1bffe0u;

    // 0x1bffe0: 0x9c8205b0  lwu         $v0, 0x5B0($a0)
    ctx->pc = 0x1bffe0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1456)));
    // 0x1bffe4: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1bffe4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1bffe8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bffe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bffec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BFFECu;
    {
        const bool branch_taken_0x1bffec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFECu;
        // 0x1bfff0: 0x8c8305b0  lw          $v1, 0x5B0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffec) {
            ctx->pc = 0x1C0010u;
            goto label_1c0010;
        }
    }
    ctx->pc = 0x1BFFF4u;
    // 0x1bfff4: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x1bfff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1bfff8: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x1bfff8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bfffc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bfffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0000: 0xac8205b0  sw          $v0, 0x5B0($a0)
    ctx->pc = 0x1c0000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1456), GPR_U32(ctx, 2));
    // 0x1c0004: 0xa08302f4  sb          $v1, 0x2F4($a0)
    ctx->pc = 0x1c0004u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c0008: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1c0008u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c000c: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1c000cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
label_1c0010:
    // 0x1c0010: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0018u;
}
