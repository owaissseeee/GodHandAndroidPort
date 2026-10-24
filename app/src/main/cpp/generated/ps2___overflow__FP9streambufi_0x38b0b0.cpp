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

// Function: __overflow__FP9streambufi
// Address: 0x38b0b0 - 0x38b0d8
void ps2___overflow__FP9streambufi_0x38b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___overflow__FP9streambufi_0x38b0b0");
#endif

    switch (ctx->pc) {
        case 0x38b0b0u: goto label_38b0b0;
        case 0x38b0b4u: goto label_38b0b4;
        case 0x38b0b8u: goto label_38b0b8;
        case 0x38b0bcu: goto label_38b0bc;
        case 0x38b0c0u: goto label_38b0c0;
        case 0x38b0c4u: goto label_38b0c4;
        case 0x38b0c8u: goto label_38b0c8;
        case 0x38b0ccu: goto label_38b0cc;
        case 0x38b0d0u: goto label_38b0d0;
        case 0x38b0d4u: goto label_38b0d4;
        default: break;
    }

    ctx->pc = 0x38b0b0u;

label_38b0b0:
    // 0x38b0b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38b0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_38b0b4:
    // 0x38b0b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38b0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38b0b8:
    // 0x38b0b8: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x38b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_38b0bc:
    // 0x38b0bc: 0x84660010  lh          $a2, 0x10($v1)
    ctx->pc = 0x38b0bcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_38b0c0:
    // 0x38b0c0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x38b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_38b0c4:
    // 0x38b0c4: 0x40f809  jalr        $v0
label_38b0c8:
    if (ctx->pc == 0x38B0C8u) {
        ctx->pc = 0x38B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B0C4u;
        // 0x38b0c8: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B0CCu;
        goto label_38b0cc;
    }
    ctx->pc = 0x38B0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38B0CCu);
        ctx->pc = 0x38B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B0C4u;
        // 0x38b0c8: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B0C4u, 0x38B0CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38B0CCu;
label_38b0cc:
    // 0x38b0cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38b0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38b0d0:
    // 0x38b0d0: 0x3e00008  jr          $ra
label_38b0d4:
    if (ctx->pc == 0x38B0D4u) {
        ctx->pc = 0x38B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B0D0u;
        // 0x38b0d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B0D8u;
        goto label_fallthrough_0x38b0d0;
    }
    ctx->pc = 0x38B0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B0D0u;
        // 0x38b0d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38b0d0:
    ctx->pc = 0x38B0D8u;
}
