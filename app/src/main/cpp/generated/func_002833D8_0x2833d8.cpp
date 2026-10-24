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

// Function: func_002833D8
// Address: 0x2833d8 - 0x283438
void func_002833D8_0x2833d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002833D8_0x2833d8");
#endif

    ctx->pc = 0x2833d8u;

    // 0x2833d8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2833d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2833dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2833dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2833e0: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2833E0u;
    {
        const bool branch_taken_0x2833e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2833E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833E0u;
        // 0x2833e4: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833e0) {
            ctx->pc = 0x283410u;
            goto label_283410;
        }
    }
    ctx->pc = 0x2833E8u;
    // 0x2833e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2833E8u;
    {
        const bool branch_taken_0x2833e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2833ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833E8u;
        // 0x2833ec: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833e8) {
            ctx->pc = 0x2833FCu;
            goto label_2833fc;
        }
    }
    ctx->pc = 0x2833F0u;
    // 0x2833f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2833f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2833f4: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2833F4u;
    {
        const bool branch_taken_0x2833f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2833F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833F4u;
        // 0x2833f8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833f4) {
            ctx->pc = 0x28341Cu;
            goto label_28341c;
        }
    }
    ctx->pc = 0x2833FCu;
label_2833fc:
    // 0x2833fc: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x2833fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x283400: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x283400u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x283404: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x283404u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x283408: 0x3e00008  jr          $ra
    ctx->pc = 0x283408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283408u;
        // 0x28340c: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283410u;
label_283410:
    // 0x283410: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x283410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x283414: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283414u;
    {
        const bool branch_taken_0x283414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283414u;
        // 0x283418: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283414) {
            ctx->pc = 0x283420u;
            goto label_283420;
        }
    }
    ctx->pc = 0x28341Cu;
label_28341c:
    // 0x28341c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28341cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_283420:
    // 0x283420: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x283420u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x283424: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x283424u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x283428: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x283428u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x28342c: 0x3e00008  jr          $ra
    ctx->pc = 0x28342Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28342Cu;
        // 0x283430: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28342Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283434u;
    // 0x283434: 0x0  nop
    ctx->pc = 0x283434u;
    // NOP
    ctx->pc = 0x283438u;
}
