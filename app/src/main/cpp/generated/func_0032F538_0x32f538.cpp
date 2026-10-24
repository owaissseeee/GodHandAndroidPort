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

// Function: func_0032F538
// Address: 0x32f538 - 0x32f570
void func_0032F538_0x32f538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032F538_0x32f538");
#endif

    switch (ctx->pc) {
        case 0x32f548u: goto label_32f548;
        default: break;
    }

    ctx->pc = 0x32f538u;

    // 0x32f538: 0x8c8302b0  lw          $v1, 0x2B0($a0)
    ctx->pc = 0x32f538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
    // 0x32f53c: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x32F53Cu;
    {
        const bool branch_taken_0x32f53c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x32F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F53Cu;
        // 0x32f540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f53c) {
            ctx->pc = 0x32F564u;
            goto label_32f564;
        }
    }
    ctx->pc = 0x32F544u;
    // 0x32f544: 0x248402bc  addiu       $a0, $a0, 0x2BC
    ctx->pc = 0x32f544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 700));
label_32f548:
    // 0x32f548: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32f548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32f54c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x32f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x32f550: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32f550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32f554: 0x0  nop
    ctx->pc = 0x32f554u;
    // NOP
    // 0x32f558: 0x0  nop
    ctx->pc = 0x32f558u;
    // NOP
    // 0x32f55c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32F55Cu;
    {
        const bool branch_taken_0x32f55c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F55Cu;
        // 0x32f560: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f55c) {
            ctx->pc = 0x32F548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f548;
        }
    }
    ctx->pc = 0x32F564u;
label_32f564:
    // 0x32f564: 0x3e00008  jr          $ra
    ctx->pc = 0x32F564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F564u;
        // 0x32f568: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F56Cu;
    // 0x32f56c: 0x0  nop
    ctx->pc = 0x32f56cu;
    // NOP
    ctx->pc = 0x32f570u;
}
