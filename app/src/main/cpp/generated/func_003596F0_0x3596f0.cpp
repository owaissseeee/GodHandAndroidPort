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

// Function: func_003596F0
// Address: 0x3596f0 - 0x359730
void func_003596F0_0x3596f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003596F0_0x3596f0");
#endif

    ctx->pc = 0x3596f0u;

    // 0x3596f0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3596f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3596f4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3596f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3596f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3596f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3596fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3596fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x359700: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x359700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x359704: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x359704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x359708: 0x24841348  addiu       $a0, $a0, 0x1348
    ctx->pc = 0x359708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4936));
    // 0x35970c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35970cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x359710: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x359710u;
    {
        const bool branch_taken_0x359710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x359714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359710u;
        // 0x359714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359710) {
            ctx->pc = 0x359728u;
            goto label_359728;
        }
    }
    ctx->pc = 0x359718u;
    // 0x359718: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x359718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35971c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x35971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x359720: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x359720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x359724: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x359724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_359728:
    // 0x359728: 0x3e00008  jr          $ra
    ctx->pc = 0x359728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359730u;
}
