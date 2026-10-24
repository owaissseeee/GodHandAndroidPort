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

// Function: cCoreSave_clearAllKillEmNum
// Address: 0x1fc548 - 0x1fc580
void cCoreSave_clearAllKillEmNum_0x1fc548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_clearAllKillEmNum_0x1fc548");
#endif

    switch (ctx->pc) {
        case 0x1fc558u: goto label_1fc558;
        default: break;
    }

    ctx->pc = 0x1fc548u;

    // 0x1fc548: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1fc548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc54c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fc550: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC550u;
    {
        const bool branch_taken_0x1fc550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC550u;
        // 0x1fc554: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc550) {
            ctx->pc = 0x1FC574u;
            goto label_1fc574;
        }
    }
    ctx->pc = 0x1FC558u;
label_1fc558:
    // 0x1fc558: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fc558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fc55c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1fc55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fc560: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fc560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fc564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc568: 0x2ca40005  sltiu       $a0, $a1, 0x5
    ctx->pc = 0x1fc568u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1fc56c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FC56Cu;
    {
        const bool branch_taken_0x1fc56c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC56Cu;
        // 0x1fc570: 0xa4400bac  sh          $zero, 0xBAC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2988), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc56c) {
            ctx->pc = 0x1FC558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc558;
        }
    }
    ctx->pc = 0x1FC574u;
label_1fc574:
    // 0x1fc574: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC57Cu;
    // 0x1fc57c: 0x0  nop
    ctx->pc = 0x1fc57cu;
    // NOP
    ctx->pc = 0x1fc580u;
}
