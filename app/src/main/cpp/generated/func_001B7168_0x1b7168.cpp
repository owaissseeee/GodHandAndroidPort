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

// Function: func_001B7168
// Address: 0x1b7168 - 0x1b71a0
void func_001B7168_0x1b7168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B7168_0x1b7168");
#endif

    switch (ctx->pc) {
        case 0x1b717cu: goto label_1b717c;
        case 0x1b718cu: goto label_1b718c;
        default: break;
    }

    ctx->pc = 0x1b7168u;

    // 0x1b7168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b716c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b716cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b7170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7174: 0xc06ddac  jal         func_1B76B0
    ctx->pc = 0x1B7174u;
    SET_GPR_U32(ctx, 31, 0x1B717Cu);
    ctx->pc = 0x1B7178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7174u;
    // 0x1b7178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1B7174u, 0x1B717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B717Cu;
label_1b717c:
    // 0x1b717c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B717Cu;
    {
        const bool branch_taken_0x1b717c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b717c) {
            ctx->pc = 0x1B7180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B717Cu;
            // 0x1b7180: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7190u;
            goto label_1b7190;
        }
    }
    ctx->pc = 0x1B7184u;
    // 0x1b7184: 0xc06ddb6  jal         func_1B76D8
    ctx->pc = 0x1B7184u;
    SET_GPR_U32(ctx, 31, 0x1B718Cu);
    ctx->pc = 0x1B7188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7184u;
    // 0x1b7188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1B7184u, 0x1B718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B718Cu;
label_1b718c:
    // 0x1b718c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b718cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7190:
    // 0x1b7190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7194: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7194u;
        // 0x1b7198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B719Cu;
    // 0x1b719c: 0x0  nop
    ctx->pc = 0x1b719cu;
    // NOP
    ctx->pc = 0x1b71a0u;
}
