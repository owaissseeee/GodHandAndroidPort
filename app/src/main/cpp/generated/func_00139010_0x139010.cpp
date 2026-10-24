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

// Function: func_00139010
// Address: 0x139010 - 0x139040
void func_00139010_0x139010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00139010_0x139010");
#endif

    switch (ctx->pc) {
        case 0x139034u: goto label_139034;
        default: break;
    }

    ctx->pc = 0x139010u;

    // 0x139010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139014: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x139014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x139018: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x139018u;
    {
        const bool branch_taken_0x139018 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139018u;
        // 0x13901c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139018) {
            ctx->pc = 0x139034u;
            goto label_139034;
        }
    }
    ctx->pc = 0x139020u;
    // 0x139020: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139020u;
    {
        const bool branch_taken_0x139020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x139024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139020u;
        // 0x139024: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139020) {
            ctx->pc = 0x139038u;
            goto label_139038;
        }
    }
    ctx->pc = 0x139028u;
    // 0x139028: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x139028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x13902c: 0xc04e2fa  jal         func_138BE8
    ctx->pc = 0x13902Cu;
    SET_GPR_U32(ctx, 31, 0x139034u);
    ctx->pc = 0x139030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13902Cu;
    // 0x139030: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138BE8u, 0x13902Cu, 0x139034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139034u;
label_139034:
    // 0x139034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_139038:
    // 0x139038: 0x3e00008  jr          $ra
    ctx->pc = 0x139038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139038u;
        // 0x13903c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139040u;
}
