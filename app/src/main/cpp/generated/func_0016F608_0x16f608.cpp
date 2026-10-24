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

// Function: func_0016F608
// Address: 0x16f608 - 0x16f640
void func_0016F608_0x16f608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016F608_0x16f608");
#endif

    switch (ctx->pc) {
        case 0x16f634u: goto label_16f634;
        default: break;
    }

    ctx->pc = 0x16f608u;

    // 0x16f608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f60c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x16f60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f614: 0x8cc505ec  lw          $a1, 0x5EC($a2)
    ctx->pc = 0x16f614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1516)));
    // 0x16f618: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F618u;
    {
        const bool branch_taken_0x16f618 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F618u;
        // 0x16f61c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f618) {
            ctx->pc = 0x16F634u;
            goto label_16f634;
        }
    }
    ctx->pc = 0x16F620u;
    // 0x16f620: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x16f620u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x16f624: 0x8cc405f0  lw          $a0, 0x5F0($a2)
    ctx->pc = 0x16f624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1520)));
    // 0x16f628: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16f628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16f62c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x16F62Cu;
    SET_GPR_U32(ctx, 31, 0x16F634u);
    ctx->pc = 0x16F630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F62Cu;
    // 0x16f630: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x16F62Cu, 0x16F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F634u;
label_16f634:
    // 0x16f634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f638: 0x3e00008  jr          $ra
    ctx->pc = 0x16F638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F638u;
        // 0x16f63c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F640u;
}
