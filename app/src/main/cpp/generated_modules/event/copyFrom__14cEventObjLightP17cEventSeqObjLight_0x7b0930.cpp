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
// Function: copyFrom__14cEventObjLightP17cEventSeqObjLight
// Address: 0x7b0930 - 0x7b0970
void copyFrom__14cEventObjLightP17cEventSeqObjLight_0x7b0930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copyFrom__14cEventObjLightP17cEventSeqObjLight_0x7b0930");
#endif

    switch (ctx->pc) {
        case 0x7b0950u: goto label_7b0950;
        case 0x7b0960u: goto label_7b0960;
        default: break;
    }

    ctx->pc = 0x7b0930u;

    // 0x7b0930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7b0930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7b0934: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x7b0934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x7b0938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b0938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b093c: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x7b093cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x7b0940: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B0940u;
    {
        const bool branch_taken_0x7b0940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x7b0940) {
            ctx->pc = 0x7B0958u;
            goto label_7b0958;
        }
    }
    ctx->pc = 0x7B0948u;
    // 0x7b0948: 0xc1ec26a  jal         func_7B09A8
    ctx->pc = 0x7B0948u;
    SET_GPR_U32(ctx, 31, 0x7B0950u);
    ctx->pc = 0x7B09A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B09A8u, 0x7B0948u, 0x7B0950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0950u;
label_7b0950:
    // 0x7b0950: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B0950u;
    {
        const bool branch_taken_0x7b0950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0950u;
        // 0x7b0954: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0950) {
            ctx->pc = 0x7B0964u;
            goto label_7b0964;
        }
    }
    ctx->pc = 0x7B0958u;
label_7b0958:
    // 0x7b0958: 0xc1ec25c  jal         func_7B0970
    ctx->pc = 0x7B0958u;
    SET_GPR_U32(ctx, 31, 0x7B0960u);
    ctx->pc = 0x7B095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0958u;
    // 0x7b095c: 0x90a60009  lbu         $a2, 0x9($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0970u, 0x7B0958u, 0x7B0960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0960u;
label_7b0960:
    // 0x7b0960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b0960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7b0964:
    // 0x7b0964: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0964u;
        // 0x7b0968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B096Cu;
    // 0x7b096c: 0x0  nop
    ctx->pc = 0x7b096cu;
    // NOP
    ctx->pc = 0x7b0970u;
}
} // namespace gh_event
