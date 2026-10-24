#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: copyFromOrigin__12cEventFilterP15cEventSeqFilter
// Address: 0x7afb70 - 0x7afbc8
void copyFromOrigin__12cEventFilterP15cEventSeqFilter_0x7afb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copyFromOrigin__12cEventFilterP15cEventSeqFilter_0x7afb70");
#endif

    switch (ctx->pc) {
        case 0x7afb7cu: goto label_7afb7c;
        default: break;
    }

    ctx->pc = 0x7afb70u;

    // 0x7afb70: 0x248202e8  addiu       $v0, $a0, 0x2E8
    ctx->pc = 0x7afb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 744));
    // 0x7afb74: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x7afb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x7afb78: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x7afb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_7afb7c:
    // 0x7afb7c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x7afb7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7afb80: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x7afb80u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7afb84: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x7afb84u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x7afb88: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x7afb88u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x7afb8c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x7afb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x7afb90: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x7afb90u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x7afb94: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x7afb94u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x7afb98: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x7afb98u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x7afb9c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x7afb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x7afba0: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7AFBA0u;
    {
        const bool branch_taken_0x7afba0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x7AFBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFBA0u;
        // 0x7afba4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7afba0) {
            ctx->pc = 0x7AFB7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7afb7c;
        }
    }
    ctx->pc = 0x7AFBA8u;
    // 0x7afba8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x7afba8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7afbac: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x7afbacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7afbb0: 0xdc860010  ld          $a2, 0x10($a0)
    ctx->pc = 0x7afbb0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x7afbb4: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x7afbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x7afbb8: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x7afbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x7afbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x7AFBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AFBBCu;
        // 0x7afbc0: 0xfca60010  sd          $a2, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AFBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AFBC4u;
    // 0x7afbc4: 0x0  nop
    ctx->pc = 0x7afbc4u;
    // NOP
    ctx->pc = 0x7afbc8u;
}
} // namespace gh_event
