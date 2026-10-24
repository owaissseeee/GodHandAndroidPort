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

// Function: func_00358328
// Address: 0x358328 - 0x358368
void func_00358328_0x358328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00358328_0x358328");
#endif

    switch (ctx->pc) {
        case 0x358338u: goto label_358338;
        default: break;
    }

    ctx->pc = 0x358328u;

    // 0x358328: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x358328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35832c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35832cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358330: 0x2446e2c4  addiu       $a2, $v0, -0x1D3C
    ctx->pc = 0x358330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959812));
    // 0x358334: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x358334u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EE2C4u));
label_358338:
    // 0x358338: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x358338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x35833c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x35833cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358340: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x358340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x358344: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x358344u;
    {
        const bool branch_taken_0x358344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x358348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358344u;
        // 0x358348: 0x28a40008  slti        $a0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358344) {
            ctx->pc = 0x358360u;
            goto label_358360;
        }
    }
    ctx->pc = 0x35834Cu;
    // 0x35834c: 0x0  nop
    ctx->pc = 0x35834cu;
    // NOP
    // 0x358350: 0x0  nop
    ctx->pc = 0x358350u;
    // NOP
    // 0x358354: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x358354u;
    {
        const bool branch_taken_0x358354 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x358354) {
            ctx->pc = 0x358358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358354u;
            // 0x358358: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358338;
        }
    }
    ctx->pc = 0x35835Cu;
    // 0x35835c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35835cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_358360:
    // 0x358360: 0x3e00008  jr          $ra
    ctx->pc = 0x358360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358368u;
}
