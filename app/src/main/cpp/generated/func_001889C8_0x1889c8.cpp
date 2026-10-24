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

// Function: func_001889C8
// Address: 0x1889c8 - 0x188a18
void func_001889C8_0x1889c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001889C8_0x1889c8");
#endif

    ctx->pc = 0x1889c8u;

    // 0x1889c8: 0x9c8205b0  lwu         $v0, 0x5B0($a0)
    ctx->pc = 0x1889c8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1456)));
    // 0x1889cc: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1889ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1889d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1889d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1889d4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1889D4u;
    {
        const bool branch_taken_0x1889d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1889D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889D4u;
        // 0x1889d8: 0x8c8305b0  lw          $v1, 0x5B0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889d4) {
            ctx->pc = 0x1889F8u;
            goto label_1889f8;
        }
    }
    ctx->pc = 0x1889DCu;
    // 0x1889dc: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x1889dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1889e0: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x1889e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1889e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1889e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1889e8: 0xac8205b0  sw          $v0, 0x5B0($a0)
    ctx->pc = 0x1889e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1456), GPR_U32(ctx, 2));
    // 0x1889ec: 0xa08302f4  sb          $v1, 0x2F4($a0)
    ctx->pc = 0x1889ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x1889f0: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1889f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1889f4: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1889f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
label_1889f8:
    // 0x1889f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1889F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1889F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188A00u;
    // 0x188a00: 0x0  nop
    ctx->pc = 0x188a00u;
    // NOP
    // 0x188a04: 0x0  nop
    ctx->pc = 0x188a04u;
    // NOP
    // 0x188a08: 0x0  nop
    ctx->pc = 0x188a08u;
    // NOP
    // 0x188a0c: 0x0  nop
    ctx->pc = 0x188a0cu;
    // NOP
    // 0x188a10: 0x0  nop
    ctx->pc = 0x188a10u;
    // NOP
    // 0x188a14: 0x0  nop
    ctx->pc = 0x188a14u;
    // NOP
    ctx->pc = 0x188a18u;
}
