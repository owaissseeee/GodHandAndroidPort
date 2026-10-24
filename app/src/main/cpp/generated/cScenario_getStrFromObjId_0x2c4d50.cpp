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

// Function: cScenario_getStrFromObjId
// Address: 0x2c4d50 - 0x2c4dc0
void cScenario_getStrFromObjId_0x2c4d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_getStrFromObjId_0x2c4d50");
#endif

    switch (ctx->pc) {
        case 0x2c4d78u: goto label_2c4d78;
        case 0x2c4d90u: goto label_2c4d90;
        case 0x2c4db4u: goto label_2c4db4;
        default: break;
    }

    ctx->pc = 0x2c4d50u;

    // 0x2c4d50: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2c4d50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c4d54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c4d58: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c4d5c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c4d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d60: 0x24462f88  addiu       $a2, $v0, 0x2F88
    ctx->pc = 0x2c4d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12168));
    // 0x2c4d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c4d68: 0x30e9ff00  andi        $t1, $a3, 0xFF00
    ctx->pc = 0x2c4d68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x2c4d6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c4d6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d70: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2c4d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2c4d74: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x2c4d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2c4d78:
    // 0x2c4d78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c4d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c4d7c: 0x15220006  bne         $t1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4D7Cu;
    {
        const bool branch_taken_0x2c4d7c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D7Cu;
        // 0x2c4d80: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d7c) {
            ctx->pc = 0x2C4D98u;
            goto label_2c4d98;
        }
    }
    ctx->pc = 0x2C4D84u;
    // 0x2c4d84: 0x24a5c2b8  addiu       $a1, $a1, -0x3D48
    ctx->pc = 0x2c4d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951608));
    // 0x2c4d88: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2C4D88u;
    SET_GPR_U32(ctx, 31, 0x2C4D90u);
    ctx->pc = 0x2C4D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4D88u;
    // 0x2c4d8c: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2C4D88u, 0x2C4D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4D90u;
label_2c4d90:
    // 0x2c4d90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4D90u;
    {
        const bool branch_taken_0x2c4d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D90u;
        // 0x2c4d94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d90) {
            ctx->pc = 0x2C4DB8u;
            goto label_2c4db8;
        }
    }
    ctx->pc = 0x2C4D98u;
label_2c4d98:
    // 0x2c4d98: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2c4d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2c4d9c: 0x2d020005  sltiu       $v0, $t0, 0x5
    ctx->pc = 0x2c4d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c4da0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2C4DA0u;
    {
        const bool branch_taken_0x2c4da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DA0u;
        // 0x2c4da4: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4da0) {
            ctx->pc = 0x2C4D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4d78;
        }
    }
    ctx->pc = 0x2C4DA8u;
    // 0x2c4da8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2c4da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2c4dac: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2C4DACu;
    SET_GPR_U32(ctx, 31, 0x2C4DB4u);
    ctx->pc = 0x2C4DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4DACu;
    // 0x2c4db0: 0x24a5c2c0  addiu       $a1, $a1, -0x3D40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2C4DACu, 0x2C4DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4DB4u;
label_2c4db4:
    // 0x2c4db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4db8:
    // 0x2c4db8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DB8u;
        // 0x2c4dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4DC0u;
}
