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

// Function: func_00167328
// Address: 0x167328 - 0x167360
void func_00167328_0x167328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00167328_0x167328");
#endif

    switch (ctx->pc) {
        case 0x167338u: goto label_167338;
        default: break;
    }

    ctx->pc = 0x167328u;

    // 0x167328: 0x24850080  addiu       $a1, $a0, 0x80
    ctx->pc = 0x167328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x16732c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16732cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167330: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x167330u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x167334: 0x0  nop
    ctx->pc = 0x167334u;
    // NOP
label_167338:
    // 0x167338: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x167338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16733c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x16733cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x167340: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x167340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x167344: 0x2cc40018  sltiu       $a0, $a2, 0x18
    ctx->pc = 0x167344u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x167348: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x167348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x16734c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x16734cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x167350: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x167350u;
    {
        const bool branch_taken_0x167350 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x167354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167350u;
        // 0x167354: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167350) {
            ctx->pc = 0x167338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167338;
        }
    }
    ctx->pc = 0x167358u;
    // 0x167358: 0x3e00008  jr          $ra
    ctx->pc = 0x167358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167360u;
}
