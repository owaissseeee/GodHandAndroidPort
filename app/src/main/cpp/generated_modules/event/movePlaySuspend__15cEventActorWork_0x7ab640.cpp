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
// Function: movePlaySuspend__15cEventActorWork
// Address: 0x7ab640 - 0x7ab688
void movePlaySuspend__15cEventActorWork_0x7ab640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlaySuspend__15cEventActorWork_0x7ab640");
#endif

    switch (ctx->pc) {
        case 0x7ab678u: goto label_7ab678;
        default: break;
    }

    ctx->pc = 0x7ab640u;

    // 0x7ab640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ab640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7ab644: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x7ab644u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ab648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ab64c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7ab64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab650: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7ab650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab654: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x7ab654u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7ab658: 0x8d020250  lw          $v0, 0x250($t0)
    ctx->pc = 0x7ab658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 592)));
    // 0x7ab65c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x7ab65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x7ab660: 0xad020250  sw          $v0, 0x250($t0)
    ctx->pc = 0x7ab660u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 592), GPR_U32(ctx, 2));
    // 0x7ab664: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x7ab664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7ab668: 0x8ce20250  lw          $v0, 0x250($a3)
    ctx->pc = 0x7ab668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 592)));
    // 0x7ab66c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x7ab66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x7ab670: 0xc1eae24  jal         func_7AB890
    ctx->pc = 0x7AB670u;
    SET_GPR_U32(ctx, 31, 0x7AB678u);
    ctx->pc = 0x7AB674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AB670u;
    // 0x7ab674: 0xace20250  sw          $v0, 0x250($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AB890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AB890u, 0x7AB670u, 0x7AB678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AB678u;
label_7ab678:
    // 0x7ab678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ab678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ab67c: 0x3e00008  jr          $ra
    ctx->pc = 0x7AB67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB67Cu;
        // 0x7ab680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AB67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AB684u;
    // 0x7ab684: 0x0  nop
    ctx->pc = 0x7ab684u;
    // NOP
    ctx->pc = 0x7ab688u;
}
} // namespace gh_event
