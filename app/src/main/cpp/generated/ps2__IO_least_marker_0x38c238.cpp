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

// Function: _IO_least_marker
// Address: 0x38c238 - 0x38c280
void ps2__IO_least_marker_0x38c238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_least_marker_0x38c238");
#endif

    switch (ctx->pc) {
        case 0x38c250u: goto label_38c250;
        default: break;
    }

    ctx->pc = 0x38c238u;

    // 0x38c238: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x38c238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38c23c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x38c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38c240: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x38c240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x38c244: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38C244u;
    {
        const bool branch_taken_0x38c244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C244u;
        // 0x38c248: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c244) {
            ctx->pc = 0x38C26Cu;
            goto label_38c26c;
        }
    }
    ctx->pc = 0x38C24Cu;
    // 0x38c24c: 0x0  nop
    ctx->pc = 0x38c24cu;
    // NOP
label_38c250:
    // 0x38c250: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x38c250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38c254: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x38c254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38c258: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x38c258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x38c25c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x38c25cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x38c260: 0x0  nop
    ctx->pc = 0x38c260u;
    // NOP
    // 0x38c264: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38C264u;
    {
        const bool branch_taken_0x38c264 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c264) {
            ctx->pc = 0x38C250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38c250;
        }
    }
    ctx->pc = 0x38C26Cu;
label_38c26c:
    // 0x38c26c: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x38c26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x38c270: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38c270u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38c274: 0x3e00008  jr          $ra
    ctx->pc = 0x38C274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C27Cu;
    // 0x38c27c: 0x0  nop
    ctx->pc = 0x38c27cu;
    // NOP
    ctx->pc = 0x38c280u;
}
