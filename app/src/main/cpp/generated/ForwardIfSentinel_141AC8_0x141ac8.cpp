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

// Function: ForwardIfSentinel_141AC8
// Address: 0x141ac8 - 0x141af8
void ForwardIfSentinel_141AC8_0x141ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardIfSentinel_141AC8_0x141ac8");
#endif

    switch (ctx->pc) {
        case 0x141aecu: goto label_141aec;
        default: break;
    }

    ctx->pc = 0x141ac8u;

    // 0x141ac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141acc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x141accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x141ad0: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x141AD0u;
    {
        const bool branch_taken_0x141ad0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x141AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AD0u;
        // 0x141ad4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ad0) {
            ctx->pc = 0x141AECu;
            goto label_141aec;
        }
    }
    ctx->pc = 0x141AD8u;
    // 0x141ad8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141AD8u;
    {
        const bool branch_taken_0x141ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AD8u;
        // 0x141adc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ad8) {
            ctx->pc = 0x141AF0u;
            goto label_141af0;
        }
    }
    ctx->pc = 0x141AE0u;
    // 0x141ae0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x141ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x141ae4: 0xc05059e  jal         func_141678
    ctx->pc = 0x141AE4u;
    SET_GPR_U32(ctx, 31, 0x141AECu);
    ctx->pc = 0x141AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141AE4u;
    // 0x141ae8: 0x24844080  addiu       $a0, $a0, 0x4080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141678u, 0x141AE4u, 0x141AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141AECu;
label_141aec:
    // 0x141aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141af0:
    // 0x141af0: 0x3e00008  jr          $ra
    ctx->pc = 0x141AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AF0u;
        // 0x141af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141AF8u;
}
