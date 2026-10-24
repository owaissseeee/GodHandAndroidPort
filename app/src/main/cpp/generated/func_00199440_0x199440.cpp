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

// Function: func_00199440
// Address: 0x199440 - 0x1994a0
void func_00199440_0x199440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00199440_0x199440");
#endif

    switch (ctx->pc) {
        case 0x199454u: goto label_199454;
        default: break;
    }

    ctx->pc = 0x199440u;

    // 0x199440: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x199440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x199444: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x199444u;
    {
        const bool branch_taken_0x199444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199444u;
        // 0x199448: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199444) {
            ctx->pc = 0x19945Cu;
            goto label_19945c;
        }
    }
    ctx->pc = 0x19944Cu;
    // 0x19944c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19944Cu;
    {
        const bool branch_taken_0x19944c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19944c) {
            ctx->pc = 0x199450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19944Cu;
            // 0x199450: 0x94820654  lhu         $v0, 0x654($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199478u;
            goto label_199478;
        }
    }
    ctx->pc = 0x199454u;
label_199454:
    // 0x199454: 0x3e00008  jr          $ra
    ctx->pc = 0x199454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19945Cu;
label_19945c:
    // 0x19945c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x19945cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x199460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199464: 0xa4820654  sh          $v0, 0x654($a0)
    ctx->pc = 0x199464u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
    // 0x199468: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x199468u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x19946c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x19946cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x199470: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x199470u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x199474: 0x94820654  lhu         $v0, 0x654($a0)
    ctx->pc = 0x199474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1620)));
label_199478:
    // 0x199478: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x199478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19947c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x19947cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x199480: 0x1c60fff4  bgtz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x199480u;
    {
        const bool branch_taken_0x199480 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x199484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199480u;
        // 0x199484: 0xa4820654  sh          $v0, 0x654($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199480) {
            ctx->pc = 0x199454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199454;
        }
    }
    ctx->pc = 0x199488u;
    // 0x199488: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x199488u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x19948c: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x19948cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x199490: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x199490u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x199494: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x199494u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x199498: 0x3e00008  jr          $ra
    ctx->pc = 0x199498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1994A0u;
}
