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

// Function: func_001A9808
// Address: 0x1a9808 - 0x1a9858
void func_001A9808_0x1a9808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A9808_0x1a9808");
#endif

    switch (ctx->pc) {
        case 0x1a982cu: goto label_1a982c;
        case 0x1a9844u: goto label_1a9844;
        default: break;
    }

    ctx->pc = 0x1a9808u;

    // 0x1a9808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a980c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1a980cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1a9810: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a9810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a9814: 0x8c625ff8  lw          $v0, 0x5FF8($v1)
    ctx->pc = 0x1a9814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785FF8u));
    // 0x1a9818: 0x24705ff8  addiu       $s0, $v1, 0x5FF8
    ctx->pc = 0x1a9818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24568));
    // 0x1a981c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A981Cu;
    {
        const bool branch_taken_0x1a981c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A981Cu;
        // 0x1a9820: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a981c) {
            ctx->pc = 0x1A9844u;
            goto label_1a9844;
        }
    }
    ctx->pc = 0x1A9824u;
    // 0x1a9824: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1A9824u;
    SET_GPR_U32(ctx, 31, 0x1A982Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1A9824u, 0x1A982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A982Cu;
label_1a982c:
    // 0x1a982c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1a982cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a9830: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1a9830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1a9834: 0x24a57bd0  addiu       $a1, $a1, 0x7BD0
    ctx->pc = 0x1a9834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31696));
    // 0x1a9838: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1a9838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1a983c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1A983Cu;
    SET_GPR_U32(ctx, 31, 0x1A9844u);
    ctx->pc = 0x1A9840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A983Cu;
    // 0x1a9840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1A983Cu, 0x1A9844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9844u;
label_1a9844:
    // 0x1a9844: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a9844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a984c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a984cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9850: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9850u;
        // 0x1a9854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9858u;
}
