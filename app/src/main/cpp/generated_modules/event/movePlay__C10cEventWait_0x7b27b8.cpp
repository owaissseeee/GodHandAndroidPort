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
// Function: movePlay__C10cEventWait
// Address: 0x7b27b8 - 0x7b27f8
void movePlay__C10cEventWait_0x7b27b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlay__C10cEventWait_0x7b27b8");
#endif

    switch (ctx->pc) {
        case 0x7b27c8u: goto label_7b27c8;
        case 0x7b27d8u: goto label_7b27d8;
        case 0x7b27e8u: goto label_7b27e8;
        default: break;
    }

    ctx->pc = 0x7b27b8u;

    // 0x7b27b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7b27b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7b27bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b27bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b27c0: 0xc1eca78  jal         func_7B29E0
    ctx->pc = 0x7B27C0u;
    SET_GPR_U32(ctx, 31, 0x7B27C8u);
    ctx->pc = 0x7B27C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B27C0u;
    // 0x7b27c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B29E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B29E0u, 0x7B27C0u, 0x7B27C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B27C8u;
label_7b27c8:
    // 0x7b27c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B27C8u;
    {
        const bool branch_taken_0x7b27c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7b27c8) {
            ctx->pc = 0x7B27E0u;
            goto label_7b27e0;
        }
    }
    ctx->pc = 0x7B27D0u;
    // 0x7b27d0: 0xc0c345a  jal         func_30D168
    ctx->pc = 0x7B27D0u;
    SET_GPR_U32(ctx, 31, 0x7B27D8u);
    ctx->pc = 0x7B27D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B27D0u;
    // 0x7b27d4: 0x90440008  lbu         $a0, 0x8($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D168u, 0x7B27D0u, 0x7B27D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B27D8u;
label_7b27d8:
    // 0x7b27d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7B27D8u;
    {
        const bool branch_taken_0x7b27d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B27D8u;
        // 0x7b27dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b27d8) {
            ctx->pc = 0x7B27ECu;
            goto label_7b27ec;
        }
    }
    ctx->pc = 0x7B27E0u;
label_7b27e0:
    // 0x7b27e0: 0xc0c345a  jal         func_30D168
    ctx->pc = 0x7B27E0u;
    SET_GPR_U32(ctx, 31, 0x7B27E8u);
    ctx->pc = 0x7B27E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B27E0u;
    // 0x7b27e4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D168u, 0x7B27E0u, 0x7B27E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B27E8u;
label_7b27e8:
    // 0x7b27e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b27e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7b27ec:
    // 0x7b27ec: 0x3e00008  jr          $ra
    ctx->pc = 0x7B27ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B27F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B27ECu;
        // 0x7b27f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B27ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B27F4u;
    // 0x7b27f4: 0x0  nop
    ctx->pc = 0x7b27f4u;
    // NOP
    ctx->pc = 0x7b27f8u;
}
} // namespace gh_event
