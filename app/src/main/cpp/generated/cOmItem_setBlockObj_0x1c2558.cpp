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

// Function: cOmItem_setBlockObj
// Address: 0x1c2558 - 0x1c25a0
void cOmItem_setBlockObj_0x1c2558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmItem_setBlockObj_0x1c2558");
#endif

    switch (ctx->pc) {
        case 0x1c2570u: goto label_1c2570;
        default: break;
    }

    ctx->pc = 0x1c2558u;

    // 0x1c2558: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1c2558u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c255c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1c255cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2560: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2564: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2564u;
    {
        const bool branch_taken_0x1c2564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2564u;
        // 0x1c2568: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2564) {
            ctx->pc = 0x1C2598u;
            goto label_1c2598;
        }
    }
    ctx->pc = 0x1C256Cu;
    // 0x1c256c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1c256cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1c2570:
    // 0x1c2570: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1c2570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1c2574: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c2574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c2578: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c2578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c257c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1c257cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x1c2580: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x1c2580u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c2584: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2584u;
    {
        const bool branch_taken_0x1c2584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2584u;
        // 0x1c2588: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2584) {
            ctx->pc = 0x1C2598u;
            goto label_1c2598;
        }
    }
    ctx->pc = 0x1C258Cu;
    // 0x1c258c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1c258cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c2590: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C2590u;
    {
        const bool branch_taken_0x1c2590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2590) {
            ctx->pc = 0x1C2594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2590u;
            // 0x1c2594: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2570;
        }
    }
    ctx->pc = 0x1C2598u;
label_1c2598:
    // 0x1c2598: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2598u;
        // 0x1c259c: 0xfd070668  sd          $a3, 0x668($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 1640), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C25A0u;
}
