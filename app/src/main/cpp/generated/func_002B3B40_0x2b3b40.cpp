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

// Function: func_002B3B40
// Address: 0x2b3b40 - 0x2b3b70
void func_002B3B40_0x2b3b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B3B40_0x2b3b40");
#endif

    ctx->pc = 0x2b3b40u;

    // 0x2b3b40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b3b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b44: 0x8ca4008c  lw          $a0, 0x8C($a1)
    ctx->pc = 0x2b3b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x2b3b48: 0x84a30096  lh          $v1, 0x96($a1)
    ctx->pc = 0x2b3b48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x2b3b4c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x2b3b4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2b3b50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b3b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b3b54: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2b3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2b3b58: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2b3b58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2b3b5c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2b3b5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b3b60: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B3B60u;
    {
        const bool branch_taken_0x2b3b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3b60) {
            ctx->pc = 0x2B3B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3B60u;
            // 0x2b3b64: 0xa4a20096  sh          $v0, 0x96($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 150), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3B68u;
            goto label_2b3b68;
        }
    }
    ctx->pc = 0x2B3B68u;
label_2b3b68:
    // 0x2b3b68: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B68u;
        // 0x2b3b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3B70u;
}
