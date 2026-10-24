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

// Function: func_00354B40
// Address: 0x354b40 - 0x354b98
void func_00354B40_0x354b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00354B40_0x354b40");
#endif

    switch (ctx->pc) {
        case 0x354b70u: goto label_354b70;
        default: break;
    }

    ctx->pc = 0x354b40u;

    // 0x354b40: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x354b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x354b44: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x354b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x354b48: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x354b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x354b4c: 0x24880010  addiu       $t0, $a0, 0x10
    ctx->pc = 0x354b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x354b50: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x354b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x354b54: 0x2487000c  addiu       $a3, $a0, 0xC
    ctx->pc = 0x354b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x354b58: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x354b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x354b5c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x354b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x354b60: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x354b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x354b64: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x354b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x354b68: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x354b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x354b6c: 0x0  nop
    ctx->pc = 0x354b6cu;
    // NOP
label_354b70:
    // 0x354b70: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x354b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x354b74: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x354b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x354b78: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x354b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x354b7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x354b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x354b80: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x354b80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x354b84: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x354B84u;
    {
        const bool branch_taken_0x354b84 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x354B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354B84u;
        // 0x354b88: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354b84) {
            ctx->pc = 0x354B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354b70;
        }
    }
    ctx->pc = 0x354B8Cu;
    // 0x354b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x354B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354B94u;
    // 0x354b94: 0x0  nop
    ctx->pc = 0x354b94u;
    // NOP
    ctx->pc = 0x354b98u;
}
