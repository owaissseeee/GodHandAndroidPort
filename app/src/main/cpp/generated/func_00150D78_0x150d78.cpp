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

// Function: func_00150D78
// Address: 0x150d78 - 0x150dc8
void func_00150D78_0x150d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00150D78_0x150d78");
#endif

    switch (ctx->pc) {
        case 0x150d98u: goto label_150d98;
        default: break;
    }

    ctx->pc = 0x150d78u;

    // 0x150d78: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x150d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x150d7c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x150D7Cu;
    {
        const bool branch_taken_0x150d7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x150D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D7Cu;
        // 0x150d80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d7c) {
            ctx->pc = 0x150D8Cu;
            goto label_150d8c;
        }
    }
    ctx->pc = 0x150D84u;
    // 0x150d84: 0x3e00008  jr          $ra
    ctx->pc = 0x150D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D84u;
        // 0x150d88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150D8Cu;
label_150d8c:
    // 0x150d8c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x150d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x150d90: 0x24427ba0  addiu       $v0, $v0, 0x7BA0
    ctx->pc = 0x150d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31648));
    // 0x150d94: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x150d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_150d98:
    // 0x150d98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x150d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150d9c: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x150D9Cu;
    {
        const bool branch_taken_0x150d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x150DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D9Cu;
        // 0x150da0: 0x246300b0  addiu       $v1, $v1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d9c) {
            ctx->pc = 0x150DB8u;
            goto label_150db8;
        }
    }
    ctx->pc = 0x150DA4u;
    // 0x150da4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x150da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x150da8: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x150DA8u;
    {
        const bool branch_taken_0x150da8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x150DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DA8u;
        // 0x150dac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150da8) {
            ctx->pc = 0x150D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150d98;
        }
    }
    ctx->pc = 0x150DB0u;
    // 0x150db0: 0x3e00008  jr          $ra
    ctx->pc = 0x150DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DB0u;
        // 0x150db4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150DB8u;
label_150db8:
    // 0x150db8: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x150db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x150dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x150DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DBCu;
        // 0x150dc0: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150DC4u;
    // 0x150dc4: 0x0  nop
    ctx->pc = 0x150dc4u;
    // NOP
    ctx->pc = 0x150dc8u;
}
