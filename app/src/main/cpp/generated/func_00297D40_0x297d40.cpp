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

// Function: func_00297D40
// Address: 0x297d40 - 0x297d78
void func_00297D40_0x297d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00297D40_0x297d40");
#endif

    switch (ctx->pc) {
        case 0x297d58u: goto label_297d58;
        case 0x297d6cu: goto label_297d6c;
        default: break;
    }

    ctx->pc = 0x297d40u;

    // 0x297d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297d44: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x297D44u;
    {
        const bool branch_taken_0x297d44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D44u;
        // 0x297d48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d44) {
            ctx->pc = 0x297D60u;
            goto label_297d60;
        }
    }
    ctx->pc = 0x297D4Cu;
    // 0x297d4c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x297d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x297d50: 0xc0a5f4c  jal         func_297D30
    ctx->pc = 0x297D50u;
    SET_GPR_U32(ctx, 31, 0x297D58u);
    ctx->pc = 0x297D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297D50u;
    // 0x297d54: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297D30u, 0x297D50u, 0x297D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D58u;
label_297d58:
    // 0x297d58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x297D58u;
    {
        const bool branch_taken_0x297d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D58u;
        // 0x297d5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d58) {
            ctx->pc = 0x297D70u;
            goto label_297d70;
        }
    }
    ctx->pc = 0x297D60u;
label_297d60:
    // 0x297d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d64: 0xc0a5f4c  jal         func_297D30
    ctx->pc = 0x297D64u;
    SET_GPR_U32(ctx, 31, 0x297D6Cu);
    ctx->pc = 0x297D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297D64u;
    // 0x297d68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297D30u, 0x297D64u, 0x297D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D6Cu;
label_297d6c:
    // 0x297d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297d70:
    // 0x297d70: 0x3e00008  jr          $ra
    ctx->pc = 0x297D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D70u;
        // 0x297d74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297D78u;
}
