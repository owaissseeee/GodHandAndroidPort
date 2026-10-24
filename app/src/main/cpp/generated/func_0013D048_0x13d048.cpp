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

// Function: func_0013D048
// Address: 0x13d048 - 0x13d0b8
void func_0013D048_0x13d048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013D048_0x13d048");
#endif

    switch (ctx->pc) {
        case 0x13d064u: goto label_13d064;
        case 0x13d074u: goto label_13d074;
        case 0x13d084u: goto label_13d084;
        case 0x13d094u: goto label_13d094;
        case 0x13d0a4u: goto label_13d0a4;
        default: break;
    }

    ctx->pc = 0x13d048u;

    // 0x13d048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d04c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13d04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d050: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13d050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13d054: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x13d054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13d058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d05c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13D05Cu;
    SET_GPR_U32(ctx, 31, 0x13D064u);
    ctx->pc = 0x13D060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D05Cu;
    // 0x13d060: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13D05Cu, 0x13D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D064u;
label_13d064:
    // 0x13d064: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x13d064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x13d068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13d068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d06c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13D06Cu;
    SET_GPR_U32(ctx, 31, 0x13D074u);
    ctx->pc = 0x13D070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D06Cu;
    // 0x13d070: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13D06Cu, 0x13D074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D074u;
label_13d074:
    // 0x13d074: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x13d074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x13d078: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13d078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d07c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13D07Cu;
    SET_GPR_U32(ctx, 31, 0x13D084u);
    ctx->pc = 0x13D080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D07Cu;
    // 0x13d080: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13D07Cu, 0x13D084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D084u;
label_13d084:
    // 0x13d084: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x13d084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x13d088: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13d088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d08c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13D08Cu;
    SET_GPR_U32(ctx, 31, 0x13D094u);
    ctx->pc = 0x13D090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D08Cu;
    // 0x13d090: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13D08Cu, 0x13D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D094u;
label_13d094:
    // 0x13d094: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x13d094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x13d098: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13d098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d09c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13D09Cu;
    SET_GPR_U32(ctx, 31, 0x13D0A4u);
    ctx->pc = 0x13D0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D09Cu;
    // 0x13d0a0: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13D09Cu, 0x13D0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D0A4u;
label_13d0a4:
    // 0x13d0a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13d0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d0a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x13D0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0ACu;
        // 0x13d0b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D0B4u;
    // 0x13d0b4: 0x0  nop
    ctx->pc = 0x13d0b4u;
    // NOP
    ctx->pc = 0x13d0b8u;
}
