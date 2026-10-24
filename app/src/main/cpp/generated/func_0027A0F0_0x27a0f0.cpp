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

// Function: func_0027A0F0
// Address: 0x27a0f0 - 0x27a128
void func_0027A0F0_0x27a0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027A0F0_0x27a0f0");
#endif

    ctx->pc = 0x27a0f0u;

    // 0x27a0f0: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x27a0f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x27a0f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27a0f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27a0f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A0F8u;
    {
        const bool branch_taken_0x27a0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0F8u;
        // 0x27a0fc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a0f8) {
            ctx->pc = 0x27A10Cu;
            goto label_27a10c;
        }
    }
    ctx->pc = 0x27A100u;
    // 0x27a100: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x27a100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x27a104: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27A104u;
    {
        const bool branch_taken_0x27a104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A104u;
        // 0x27a108: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a104) {
            ctx->pc = 0x27A110u;
            goto label_27a110;
        }
    }
    ctx->pc = 0x27A10Cu;
label_27a10c:
    // 0x27a10c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27a10cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a110:
    // 0x27a110: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x27A110u;
    {
        const bool branch_taken_0x27a110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a110) {
            ctx->pc = 0x27A114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A110u;
            // 0x27a114: 0x8c4200f0  lw          $v0, 0xF0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A11Cu;
            goto label_27a11c;
        }
    }
    ctx->pc = 0x27A118u;
    // 0x27a118: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x27a118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_27a11c:
    // 0x27a11c: 0x3e00008  jr          $ra
    ctx->pc = 0x27A11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A11Cu;
        // 0x27a120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A124u;
    // 0x27a124: 0x0  nop
    ctx->pc = 0x27a124u;
    // NOP
    ctx->pc = 0x27a128u;
}
