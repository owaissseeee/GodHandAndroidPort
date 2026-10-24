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

// Function: cCoreSave_getKillEmNum
// Address: 0x1fbe08 - 0x1fbe40
void cCoreSave_getKillEmNum_0x1fbe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getKillEmNum_0x1fbe08");
#endif

    ctx->pc = 0x1fbe08u;

    // 0x1fbe08: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fbe08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbe0c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBE0Cu;
    {
        const bool branch_taken_0x1fbe0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE0Cu;
        // 0x1fbe10: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe0c) {
            ctx->pc = 0x1FBE1Cu;
            goto label_1fbe1c;
        }
    }
    ctx->pc = 0x1FBE14u;
    // 0x1fbe14: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBE14u;
    {
        const bool branch_taken_0x1fbe14 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1FBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE14u;
        // 0x1fbe18: 0x28a20005  slti        $v0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe14) {
            ctx->pc = 0x1FBE24u;
            goto label_1fbe24;
        }
    }
    ctx->pc = 0x1FBE1Cu;
label_1fbe1c:
    // 0x1fbe1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE1Cu;
        // 0x1fbe20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBE24u;
label_1fbe24:
    // 0x1fbe24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBE24u;
    {
        const bool branch_taken_0x1fbe24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE24u;
        // 0x1fbe28: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe24) {
            ctx->pc = 0x1FBE38u;
            goto label_1fbe38;
        }
    }
    ctx->pc = 0x1FBE2Cu;
    // 0x1fbe2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fbe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fbe30: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE30u;
        // 0x1fbe34: 0x8462008c  lh          $v0, 0x8C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBE38u;
label_1fbe38:
    // 0x1fbe38: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE38u;
        // 0x1fbe3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBE40u;
}
