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

// Function: func_002ACCD8
// Address: 0x2accd8 - 0x2accf8
void func_002ACCD8_0x2accd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002ACCD8_0x2accd8");
#endif

    switch (ctx->pc) {
        case 0x2accecu: goto label_2accec;
        default: break;
    }

    ctx->pc = 0x2accd8u;

    // 0x2accd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2accd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2accdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2accdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2acce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2acce4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2ACCE4u;
    SET_GPR_U32(ctx, 31, 0x2ACCECu);
    ctx->pc = 0x2ACCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACCE4u;
    // 0x2acce8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2ACCE4u, 0x2ACCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACCECu;
label_2accec:
    // 0x2accec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2accecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2accf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCF0u;
        // 0x2accf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACCF8u;
}
