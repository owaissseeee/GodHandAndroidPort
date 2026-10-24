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
// Function: isHaveMainMotion__12cEventMotionScUc
// Address: 0x7b05c8 - 0x7b0608
void isHaveMainMotion__12cEventMotionScUc_0x7b05c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isHaveMainMotion__12cEventMotionScUc_0x7b05c8");
#endif

    switch (ctx->pc) {
        case 0x7b05ecu: goto label_7b05ec;
        default: break;
    }

    ctx->pc = 0x7b05c8u;

    // 0x7b05c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7b05c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7b05cc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7b05ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7b05d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b05d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b05d4: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7b05d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7b05d8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7B05D8u;
    {
        const bool branch_taken_0x7b05d8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x7B05DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B05D8u;
        // 0x7b05dc: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b05d8) {
            ctx->pc = 0x7B05F4u;
            goto label_7b05f4;
        }
    }
    ctx->pc = 0x7B05E0u;
    // 0x7b05e0: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b05e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b05e4: 0xc1ea668  jal         func_7A99A0
    ctx->pc = 0x7B05E4u;
    SET_GPR_U32(ctx, 31, 0x7B05ECu);
    ctx->pc = 0x7B05E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B05E4u;
    // 0x7b05e8: 0x24844f80  addiu       $a0, $a0, 0x4F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A99A0u, 0x7B05E4u, 0x7B05ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B05ECu;
label_7b05ec:
    // 0x7b05ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7B05ECu;
    {
        const bool branch_taken_0x7b05ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B05F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B05ECu;
        // 0x7b05f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b05ec) {
            ctx->pc = 0x7B05FCu;
            goto label_7b05fc;
        }
    }
    ctx->pc = 0x7B05F4u;
label_7b05f4:
    // 0x7b05f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7b05f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7b05f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b05f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7b05fc:
    // 0x7b05fc: 0x3e00008  jr          $ra
    ctx->pc = 0x7B05FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B05FCu;
        // 0x7b0600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B05FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0604u;
    // 0x7b0604: 0x0  nop
    ctx->pc = 0x7b0604u;
    // NOP
    ctx->pc = 0x7b0608u;
}
} // namespace gh_event
