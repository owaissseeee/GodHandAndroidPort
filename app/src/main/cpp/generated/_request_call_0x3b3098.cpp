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

// Function: _request_call
// Address: 0x3b3098 - 0x3b3128
void _request_call_0x3b3098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_call_0x3b3098");
#endif

    ctx->pc = 0x3b3098u;

    // 0x3b3098: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x3b3098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3b309c: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x3b309cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x3b30a0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x3b30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3b30a4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B30A4u;
    {
        const bool branch_taken_0x3b30a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b30a4) {
            ctx->pc = 0x3B30A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B30A4u;
            // 0x3b30a8: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B30B4u;
            goto label_3b30b4;
        }
    }
    ctx->pc = 0x3B30ACu;
    // 0x3b30ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B30ACu;
    {
        const bool branch_taken_0x3b30ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B30B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B30ACu;
        // 0x3b30b0: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b30ac) {
            ctx->pc = 0x3B30B8u;
            goto label_3b30b8;
        }
    }
    ctx->pc = 0x3B30B4u;
label_3b30b4:
    // 0x3b30b4: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x3b30b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_3b30b8:
    // 0x3b30b8: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x3b30b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x3b30bc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3b30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3b30c0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x3b30c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3b30c4: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x3b30c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x3b30c8: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x3b30c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x3b30cc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x3b30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3b30d0: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x3b30d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x3b30d4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x3b30d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3b30d8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x3b30d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x3b30dc: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x3b30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3b30e0: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x3b30e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x3b30e4: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x3b30e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x3b30e8: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3b30e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x3b30ec: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x3b30ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3b30f0: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x3b30f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x3b30f4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3b30f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3b30f8: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x3b30f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x3b30fc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3b30fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b3100: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B3100u;
    {
        const bool branch_taken_0x3b3100 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x3b3100) {
            ctx->pc = 0x3B311Cu;
            goto label_3b311c;
        }
    }
    ctx->pc = 0x3B3108u;
    // 0x3b3108: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3b3108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3b310c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B310Cu;
    {
        const bool branch_taken_0x3b310c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b310c) {
            ctx->pc = 0x3B311Cu;
            goto label_3b311c;
        }
    }
    ctx->pc = 0x3B3114u;
    // 0x3b3114: 0x80ec290  j           func_3B0A40
    ctx->pc = 0x3B3114u;
    ctx->pc = 0x3B0A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0A40u, 0x3B3114u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B311Cu;
label_3b311c:
    // 0x3b311c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B311Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B311Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3124u;
    // 0x3b3124: 0x0  nop
    ctx->pc = 0x3b3124u;
    // NOP
    ctx->pc = 0x3b3128u;
}
