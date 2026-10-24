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
// Function: getObjIndex__C12cEventMotionUsUc
// Address: 0x7b03f8 - 0x7b0438
void getObjIndex__C12cEventMotionUsUc_0x7b03f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getObjIndex__C12cEventMotionUsUc_0x7b03f8");
#endif

    switch (ctx->pc) {
        case 0x7b041cu: goto label_7b041c;
        default: break;
    }

    ctx->pc = 0x7b03f8u;

    // 0x7b03f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7b03f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7b03fc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x7b03fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x7b0400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b0400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b0404: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x7b0404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7b0408: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7B0408u;
    {
        const bool branch_taken_0x7b0408 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7B040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0408u;
        // 0x7b040c: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0408) {
            ctx->pc = 0x7B0424u;
            goto label_7b0424;
        }
    }
    ctx->pc = 0x7B0410u;
    // 0x7b0410: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b0410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b0414: 0xc1ea59a  jal         func_7A9668
    ctx->pc = 0x7B0414u;
    SET_GPR_U32(ctx, 31, 0x7B041Cu);
    ctx->pc = 0x7B0418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0414u;
    // 0x7b0418: 0x24844f80  addiu       $a0, $a0, 0x4F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A9668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A9668u, 0x7B0414u, 0x7B041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B041Cu;
label_7b041c:
    // 0x7b041c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7B041Cu;
    {
        const bool branch_taken_0x7b041c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B0420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B041Cu;
        // 0x7b0420: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b041c) {
            ctx->pc = 0x7B042Cu;
            goto label_7b042c;
        }
    }
    ctx->pc = 0x7B0424u;
label_7b0424:
    // 0x7b0424: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7b0424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7b0428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b0428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7b042c:
    // 0x7b042c: 0x3e00008  jr          $ra
    ctx->pc = 0x7B042Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B042Cu;
        // 0x7b0430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B042Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0434u;
    // 0x7b0434: 0x0  nop
    ctx->pc = 0x7b0434u;
    // NOP
    ctx->pc = 0x7b0438u;
}
} // namespace gh_event
