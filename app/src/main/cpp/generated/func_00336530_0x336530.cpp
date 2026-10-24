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

// Function: func_00336530
// Address: 0x336530 - 0x336588
void func_00336530_0x336530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00336530_0x336530");
#endif

    switch (ctx->pc) {
        case 0x336554u: goto label_336554;
        default: break;
    }

    ctx->pc = 0x336530u;

    // 0x336530: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x336530u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x336534: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x336534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336538: 0x24c3ed70  addiu       $v1, $a2, -0x1290
    ctx->pc = 0x336538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962544));
    // 0x33653c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x33653cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x3DED70u));
    // 0x336540: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x336540u;
    {
        const bool branch_taken_0x336540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336540u;
        // 0x336544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336540) {
            ctx->pc = 0x336550u;
            goto label_336550;
        }
    }
    ctx->pc = 0x336548u;
    // 0x336548: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x336548u;
    {
        const bool branch_taken_0x336548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336548u;
        // 0x33654c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336548) {
            ctx->pc = 0x336580u;
            goto label_336580;
        }
    }
    ctx->pc = 0x336550u;
label_336550:
    // 0x336550: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x336550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_336554:
    // 0x336554: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x336554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x336558: 0x28a30028  slti        $v1, $a1, 0x28
    ctx->pc = 0x336558u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x33655c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33655Cu;
    {
        const bool branch_taken_0x33655c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x336560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33655Cu;
        // 0x336560: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33655c) {
            ctx->pc = 0x336580u;
            goto label_336580;
        }
    }
    ctx->pc = 0x336564u;
    // 0x336564: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x336564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x336568: 0x24c3ed70  addiu       $v1, $a2, -0x1290
    ctx->pc = 0x336568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962544));
    // 0x33656c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33656cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x336570: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x336570u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x336574: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x336574u;
    {
        const bool branch_taken_0x336574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x336574) {
            ctx->pc = 0x336578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336574u;
            // 0x336578: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336554;
        }
    }
    ctx->pc = 0x33657Cu;
    // 0x33657c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x33657cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_336580:
    // 0x336580: 0x3e00008  jr          $ra
    ctx->pc = 0x336580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336580u;
        // 0x336584: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336588u;
}
