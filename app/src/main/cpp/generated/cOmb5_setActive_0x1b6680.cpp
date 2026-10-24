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

// Function: cOmb5_setActive
// Address: 0x1b6680 - 0x1b66c0
void cOmb5_setActive_0x1b6680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmb5_setActive_0x1b6680");
#endif

    ctx->pc = 0x1b6680u;

    // 0x1b6680: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6680u;
    {
        const bool branch_taken_0x1b6680 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6680u;
        // 0x1b6684: 0x8c8205b8  lw          $v0, 0x5B8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6680) {
            ctx->pc = 0x1B6694u;
            goto label_1b6694;
        }
    }
    ctx->pc = 0x1B6688u;
    // 0x1b6688: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1b6688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1b668c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B668Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B668Cu;
        // 0x1b6690: 0xac8205b8  sw          $v0, 0x5B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B668Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6694u;
label_1b6694:
    // 0x1b6694: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1b6694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1b6698: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b6698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b669c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B669Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B66A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B669Cu;
        // 0x1b66a0: 0xac8205b8  sw          $v0, 0x5B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B669Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B66A4u;
    // 0x1b66a4: 0x0  nop
    ctx->pc = 0x1b66a4u;
    // NOP
    // 0x1b66a8: 0x0  nop
    ctx->pc = 0x1b66a8u;
    // NOP
    // 0x1b66ac: 0x0  nop
    ctx->pc = 0x1b66acu;
    // NOP
    // 0x1b66b0: 0x0  nop
    ctx->pc = 0x1b66b0u;
    // NOP
    // 0x1b66b4: 0x0  nop
    ctx->pc = 0x1b66b4u;
    // NOP
    // 0x1b66b8: 0x0  nop
    ctx->pc = 0x1b66b8u;
    // NOP
    // 0x1b66bc: 0x0  nop
    ctx->pc = 0x1b66bcu;
    // NOP
    ctx->pc = 0x1b66c0u;
}
