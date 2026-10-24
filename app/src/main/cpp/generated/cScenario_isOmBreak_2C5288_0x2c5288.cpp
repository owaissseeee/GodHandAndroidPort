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

// Function: cScenario_isOmBreak_2C5288
// Address: 0x2c5288 - 0x2c52b0
void cScenario_isOmBreak_2C5288_0x2c5288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_isOmBreak_2C5288_0x2c5288");
#endif

    switch (ctx->pc) {
        case 0x2c52a0u: goto label_2c52a0;
        default: break;
    }

    ctx->pc = 0x2c5288u;

    // 0x2c5288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c5288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c528c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x2c528cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x2c5290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c5290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c5294: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2c5294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2c5298: 0xc0afb58  jal         func_2BED60
    ctx->pc = 0x2C5298u;
    SET_GPR_U32(ctx, 31, 0x2C52A0u);
    ctx->pc = 0x2C529Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5298u;
    // 0x2c529c: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BED60u, 0x2C5298u, 0x2C52A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C52A0u;
label_2c52a0:
    // 0x2c52a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c52a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c52a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C52A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C52A4u;
        // 0x2c52a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C52A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C52ACu;
    // 0x2c52ac: 0x0  nop
    ctx->pc = 0x2c52acu;
    // NOP
    ctx->pc = 0x2c52b0u;
}
