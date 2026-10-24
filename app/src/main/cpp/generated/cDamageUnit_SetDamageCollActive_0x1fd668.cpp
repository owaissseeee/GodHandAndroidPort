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

// Function: cDamageUnit_SetDamageCollActive
// Address: 0x1fd668 - 0x1fd6b8
void cDamageUnit_SetDamageCollActive_0x1fd668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDamageUnit_SetDamageCollActive_0x1fd668");
#endif

    switch (ctx->pc) {
        case 0x1fd680u: goto label_1fd680;
        default: break;
    }

    ctx->pc = 0x1fd668u;

    // 0x1fd668: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1fd668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1fd66c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FD66Cu;
    {
        const bool branch_taken_0x1fd66c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD66Cu;
        // 0x1fd670: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd66c) {
            ctx->pc = 0x1FD6ACu;
            goto label_1fd6ac;
        }
    }
    ctx->pc = 0x1FD674u;
    // 0x1fd674: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x1fd674u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x1fd678: 0x34c6fffd  ori         $a2, $a2, 0xFFFD
    ctx->pc = 0x1fd678u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65533);
    // 0x1fd67c: 0x0  nop
    ctx->pc = 0x1fd67cu;
    // NOP
label_1fd680:
    // 0x1fd680: 0x14a70004  bne         $a1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD680u;
    {
        const bool branch_taken_0x1fd680 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x1FD684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD680u;
        // 0x1fd684: 0x8c830028  lw          $v1, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd680) {
            ctx->pc = 0x1FD694u;
            goto label_1fd694;
        }
    }
    ctx->pc = 0x1FD688u;
    // 0x1fd688: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fd688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd68c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD68Cu;
    {
        const bool branch_taken_0x1fd68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD68Cu;
        // 0x1fd690: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd68c) {
            ctx->pc = 0x1FD69Cu;
            goto label_1fd69c;
        }
    }
    ctx->pc = 0x1FD694u;
label_1fd694:
    // 0x1fd694: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fd694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd698: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1fd698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_1fd69c:
    // 0x1fd69c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fd69cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1fd6a0: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x1fd6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1fd6a4: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FD6A4u;
    {
        const bool branch_taken_0x1fd6a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd6a4) {
            ctx->pc = 0x1FD680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd680;
        }
    }
    ctx->pc = 0x1FD6ACu;
label_1fd6ac:
    // 0x1fd6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD6B4u;
    // 0x1fd6b4: 0x0  nop
    ctx->pc = 0x1fd6b4u;
    // NOP
    ctx->pc = 0x1fd6b8u;
}
