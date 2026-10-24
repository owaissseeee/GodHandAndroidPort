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

// Function: func_00134650
// Address: 0x134650 - 0x134690
void func_00134650_0x134650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00134650_0x134650");
#endif

    switch (ctx->pc) {
        case 0x134660u: goto label_134660;
        default: break;
    }

    ctx->pc = 0x134650u;

    // 0x134650: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x134650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x134654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x134654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134658: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x134658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13465c: 0x0  nop
    ctx->pc = 0x13465cu;
    // NOP
label_134660:
    // 0x134660: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x134660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x134664: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x134664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x134668: 0x2ca20020  sltiu       $v0, $a1, 0x20
    ctx->pc = 0x134668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x13466c: 0x0  nop
    ctx->pc = 0x13466cu;
    // NOP
    // 0x134670: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x134670u;
    {
        const bool branch_taken_0x134670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134670u;
        // 0x134674: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134670) {
            ctx->pc = 0x134660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134660;
        }
    }
    ctx->pc = 0x134678u;
    // 0x134678: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x134678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13467c: 0x3e00008  jr          $ra
    ctx->pc = 0x13467Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13467Cu;
        // 0x134680: 0xac800088  sw          $zero, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13467Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134684u;
    // 0x134684: 0x0  nop
    ctx->pc = 0x134684u;
    // NOP
    // 0x134688: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x134688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13468c: 0x0  nop
    ctx->pc = 0x13468cu;
    // NOP
    ctx->pc = 0x134690u;
}
