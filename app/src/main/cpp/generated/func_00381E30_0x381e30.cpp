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

// Function: func_00381E30
// Address: 0x381e30 - 0x381ea0
void func_00381E30_0x381e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00381E30_0x381e30");
#endif

    ctx->pc = 0x381e30u;

    // 0x381e30: 0x24830348  addiu       $v1, $a0, 0x348
    ctx->pc = 0x381e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 840));
    // 0x381e34: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x381e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x381e38: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x381E38u;
    {
        const bool branch_taken_0x381e38 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x381E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381E38u;
        // 0x381e3c: 0x24840318  addiu       $a0, $a0, 0x318 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381e38) {
            ctx->pc = 0x381E94u;
            goto label_381e94;
        }
    }
    ctx->pc = 0x381E40u;
    // 0x381e40: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x381e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x381e44: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x381e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x381e48: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x381E48u;
    {
        const bool branch_taken_0x381e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381e48) {
            ctx->pc = 0x381E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381E48u;
            // 0x381e4c: 0x8ca20038  lw          $v0, 0x38($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381E68u;
            goto label_381e68;
        }
    }
    ctx->pc = 0x381E50u;
    // 0x381e50: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x381e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x381e54: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x381E54u;
    {
        const bool branch_taken_0x381e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381E54u;
        // 0x381e58: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381e54) {
            ctx->pc = 0x381E60u;
            goto label_381e60;
        }
    }
    ctx->pc = 0x381E5Cu;
    // 0x381e5c: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x381e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_381e60:
    // 0x381e60: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x381e60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x381e64: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x381e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_381e68:
    // 0x381e68: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x381e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x381e6c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x381E6Cu;
    {
        const bool branch_taken_0x381e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381e6c) {
            ctx->pc = 0x381E94u;
            goto label_381e94;
        }
    }
    ctx->pc = 0x381E74u;
    // 0x381e74: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x381e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x381e78: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x381e78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x381e7c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x381e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x381e80: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x381E80u;
    {
        const bool branch_taken_0x381e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381e80) {
            ctx->pc = 0x381E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381E80u;
            // 0x381e84: 0xa0800002  sb          $zero, 0x2($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381E94u;
            goto label_381e94;
        }
    }
    ctx->pc = 0x381E88u;
    // 0x381e88: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x381e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x381e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x381E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381E8Cu;
        // 0x381e90: 0xa0820002  sb          $v0, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381E94u;
label_381e94:
    // 0x381e94: 0x3e00008  jr          $ra
    ctx->pc = 0x381E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381E9Cu;
    // 0x381e9c: 0x0  nop
    ctx->pc = 0x381e9cu;
    // NOP
    ctx->pc = 0x381ea0u;
}
