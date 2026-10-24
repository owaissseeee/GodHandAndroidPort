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
// Function: quitPlay__13cEventMessage
// Address: 0x7b0230 - 0x7b0260
void quitPlay__13cEventMessage_0x7b0230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quitPlay__13cEventMessage_0x7b0230");
#endif

    switch (ctx->pc) {
        case 0x7b0254u: goto label_7b0254;
        default: break;
    }

    ctx->pc = 0x7b0230u;

    // 0x7b0230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7b0230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7b0234: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x7b0234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7b0238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b0238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b023c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x7b023cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7b0240: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7B0240u;
    {
        const bool branch_taken_0x7b0240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x7B0244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0240u;
        // 0x7b0244: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0240) {
            ctx->pc = 0x7B0254u;
            goto label_7b0254;
        }
    }
    ctx->pc = 0x7B0248u;
    // 0x7b0248: 0x94850002  lhu         $a1, 0x2($a0)
    ctx->pc = 0x7b0248u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x7b024c: 0xc0abafe  jal         func_2AEBF8
    ctx->pc = 0x7B024Cu;
    SET_GPR_U32(ctx, 31, 0x7B0254u);
    ctx->pc = 0x7B0250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B024Cu;
    // 0x7b0250: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEBF8u, 0x7B024Cu, 0x7B0254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0254u;
label_7b0254:
    // 0x7b0254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b0254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b0258: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0258u;
        // 0x7b025c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0260u;
}
} // namespace gh_event
