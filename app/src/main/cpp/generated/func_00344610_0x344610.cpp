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

// Function: func_00344610
// Address: 0x344610 - 0x344648
void func_00344610_0x344610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344610_0x344610");
#endif

    ctx->pc = 0x344610u;

    // 0x344610: 0x248401ec  addiu       $a0, $a0, 0x1EC
    ctx->pc = 0x344610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 492));
    // 0x344614: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x344614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x344618: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x344618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x34461c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x34461cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x344620: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x344620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x344624: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x344624u;
    {
        const bool branch_taken_0x344624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344624u;
        // 0x344628: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344624) {
            ctx->pc = 0x34463Cu;
            goto label_34463c;
        }
    }
    ctx->pc = 0x34462Cu;
    // 0x34462c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x34462cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x344630: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x344630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x344634: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x344634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x344638: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x344638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_34463c:
    // 0x34463c: 0x3e00008  jr          $ra
    ctx->pc = 0x34463Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34463Cu;
        // 0x344640: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34463Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344644u;
    // 0x344644: 0x0  nop
    ctx->pc = 0x344644u;
    // NOP
    ctx->pc = 0x344648u;
}
