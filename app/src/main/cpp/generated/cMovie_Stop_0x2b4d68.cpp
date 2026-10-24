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

// Function: cMovie_Stop
// Address: 0x2b4d68 - 0x2b4da8
void cMovie_Stop_0x2b4d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMovie_Stop_0x2b4d68");
#endif

    switch (ctx->pc) {
        case 0x2b4d78u: goto label_2b4d78;
        case 0x2b4d88u: goto label_2b4d88;
        default: break;
    }

    ctx->pc = 0x2b4d68u;

    // 0x2b4d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4d6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4d70: 0xc0ad3e6  jal         func_2B4F98
    ctx->pc = 0x2B4D70u;
    SET_GPR_U32(ctx, 31, 0x2B4D78u);
    ctx->pc = 0x2B4F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F98u, 0x2B4D70u, 0x2B4D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D78u;
label_2b4d78:
    // 0x2b4d78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4D78u;
    {
        const bool branch_taken_0x2b4d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D78u;
        // 0x2b4d7c: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4d78) {
            ctx->pc = 0x2B4D8Cu;
            goto label_2b4d8c;
        }
    }
    ctx->pc = 0x2B4D80u;
    // 0x2b4d80: 0xc0b50b8  jal         func_2D42E0
    ctx->pc = 0x2B4D80u;
    SET_GPR_U32(ctx, 31, 0x2B4D88u);
    ctx->pc = 0x2B4D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D80u;
    // 0x2b4d84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D42E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D42E0u, 0x2B4D80u, 0x2B4D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D88u;
label_2b4d88:
    // 0x2b4d88: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2b4d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_2b4d8c:
    // 0x2b4d8c: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x2b4d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x2b4d90: 0x8c827a84  lw          $v0, 0x7A84($a0)
    ctx->pc = 0x2b4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31364)));
    // 0x2b4d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4d98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b4d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b4d9c: 0xac827a84  sw          $v0, 0x7A84($a0)
    ctx->pc = 0x2b4d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31364), GPR_U32(ctx, 2));
    // 0x2b4da0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4DA0u;
        // 0x2b4da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4DA8u;
}
