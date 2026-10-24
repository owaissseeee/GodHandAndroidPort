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
// Function: debugGetMotionLength__C12cEventMotionScUcUc
// Address: 0x7b0608 - 0x7b0660
void debugGetMotionLength__C12cEventMotionScUcUc_0x7b0608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugGetMotionLength__C12cEventMotionScUcUc_0x7b0608");
#endif

    switch (ctx->pc) {
        case 0x7b0630u: goto label_7b0630;
        case 0x7b0648u: goto label_7b0648;
        default: break;
    }

    ctx->pc = 0x7b0608u;

    // 0x7b0608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7b0608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7b060c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7b060cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7b0610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b0610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b0614: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x7b0614u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x7b0618: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7b0618u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7b061c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7B061Cu;
    {
        const bool branch_taken_0x7b061c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x7B0620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B061Cu;
        // 0x7b0620: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b061c) {
            ctx->pc = 0x7B0638u;
            goto label_7b0638;
        }
    }
    ctx->pc = 0x7B0624u;
    // 0x7b0624: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b0624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b0628: 0xc1ea688  jal         func_7A9A20
    ctx->pc = 0x7B0628u;
    SET_GPR_U32(ctx, 31, 0x7B0630u);
    ctx->pc = 0x7B062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0628u;
    // 0x7b062c: 0x24844f80  addiu       $a0, $a0, 0x4F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A9A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A9A20u, 0x7B0628u, 0x7B0630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0630u;
label_7b0630:
    // 0x7b0630: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x7B0630u;
    {
        const bool branch_taken_0x7b0630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B0634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0630u;
        // 0x7b0634: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0630) {
            ctx->pc = 0x7B0654u;
            goto label_7b0654;
        }
    }
    ctx->pc = 0x7B0638u;
label_7b0638:
    // 0x7b0638: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b0638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b063c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x7b063cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0640: 0xc1eb3b8  jal         func_7ACEE0
    ctx->pc = 0x7B0640u;
    SET_GPR_U32(ctx, 31, 0x7B0648u);
    ctx->pc = 0x7B0644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0640u;
    // 0x7b0644: 0x24845248  addiu       $a0, $a0, 0x5248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACEE0u, 0x7B0640u, 0x7B0648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0648u;
label_7b0648:
    // 0x7b0648: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x7b0648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x7b064c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x7b064cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x7b0650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b0650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7b0654:
    // 0x7b0654: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0654u;
        // 0x7b0658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B065Cu;
    // 0x7b065c: 0x0  nop
    ctx->pc = 0x7b065cu;
    // NOP
    ctx->pc = 0x7b0660u;
}
} // namespace gh_event
