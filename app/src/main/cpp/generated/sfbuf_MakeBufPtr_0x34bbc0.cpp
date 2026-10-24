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

// Function: sfbuf_MakeBufPtr
// Address: 0x34bbc0 - 0x34bc00
void sfbuf_MakeBufPtr_0x34bbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfbuf_MakeBufPtr_0x34bbc0");
#endif

    switch (ctx->pc) {
        case 0x34bbd0u: goto label_34bbd0;
        default: break;
    }

    ctx->pc = 0x34bbc0u;

    // 0x34bbc0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x34bbc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bbc4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x34bbc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bbc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34bbc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bbcc: 0x0  nop
    ctx->pc = 0x34bbccu;
    // NOP
label_34bbd0:
    // 0x34bbd0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x34bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x34bbd4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x34bbd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x34bbd8: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x34bbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x34bbdc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x34bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x34bbe0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x34bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34bbe4: 0x28e50008  slti        $a1, $a3, 0x8
    ctx->pc = 0x34bbe4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x34bbe8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x34bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x34bbec: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x34BBECu;
    {
        const bool branch_taken_0x34bbec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x34BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BBECu;
        // 0x34bbf0: 0xc43021  addu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bbec) {
            ctx->pc = 0x34BBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34bbd0;
        }
    }
    ctx->pc = 0x34BBF4u;
    // 0x34bbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x34BBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BBFCu;
    // 0x34bbfc: 0x0  nop
    ctx->pc = 0x34bbfcu;
    // NOP
    ctx->pc = 0x34bc00u;
}
