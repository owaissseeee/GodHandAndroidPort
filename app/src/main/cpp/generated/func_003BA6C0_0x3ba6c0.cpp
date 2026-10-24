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

// Function: func_003BA6C0
// Address: 0x3ba6c0 - 0x3ba708
void func_003BA6C0_0x3ba6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BA6C0_0x3ba6c0");
#endif

    switch (ctx->pc) {
        case 0x3ba6d8u: goto label_3ba6d8;
        default: break;
    }

    ctx->pc = 0x3ba6c0u;

    // 0x3ba6c0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3ba6c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba6c4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x3ba6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ba6c8: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x3ba6c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3ba6cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3BA6CCu;
    {
        const bool branch_taken_0x3ba6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA6CCu;
        // 0x3ba6d0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba6cc) {
            ctx->pc = 0x3BA6FCu;
            goto label_3ba6fc;
        }
    }
    ctx->pc = 0x3BA6D4u;
    // 0x3ba6d4: 0x0  nop
    ctx->pc = 0x3ba6d4u;
    // NOP
label_3ba6d8:
    // 0x3ba6d8: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x3ba6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x3ba6dc: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3ba6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x3ba6e0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3ba6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ba6e4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3ba6e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ba6e8: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x3ba6e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ba6ec: 0xe8302b  sltu        $a2, $a3, $t0
    ctx->pc = 0x3ba6ecu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3ba6f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3ba6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ba6f4: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3BA6F4u;
    {
        const bool branch_taken_0x3ba6f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA6F4u;
        // 0x3ba6f8: 0xa0450000  sb          $a1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba6f4) {
            ctx->pc = 0x3BA6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ba6d8;
        }
    }
    ctx->pc = 0x3BA6FCu;
label_3ba6fc:
    // 0x3ba6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA704u;
    // 0x3ba704: 0x0  nop
    ctx->pc = 0x3ba704u;
    // NOP
    ctx->pc = 0x3ba708u;
}
