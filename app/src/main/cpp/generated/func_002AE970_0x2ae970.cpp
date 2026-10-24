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

// Function: func_002AE970
// Address: 0x2ae970 - 0x2ae990
void func_002AE970_0x2ae970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AE970_0x2ae970");
#endif

    switch (ctx->pc) {
        case 0x2ae984u: goto label_2ae984;
        default: break;
    }

    ctx->pc = 0x2ae970u;

    // 0x2ae970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ae970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ae974: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ae974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae97c: 0xc0aba50  jal         func_2AE940
    ctx->pc = 0x2AE97Cu;
    SET_GPR_U32(ctx, 31, 0x2AE984u);
    ctx->pc = 0x2AE980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE97Cu;
    // 0x2ae980: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE940u, 0x2AE97Cu, 0x2AE984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE984u;
label_2ae984:
    // 0x2ae984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae988: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE988u;
        // 0x2ae98c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE990u;
}
